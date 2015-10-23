#include "user_manage_dialog.h"
#include "ui_user_manage_dialog.h"

user_manage_Dialog::user_manage_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_manage_Dialog)
{
    ui->setupUi(this);

    user_manage_Dialog::on_guide_user_Button_clicked();
}

user_manage_Dialog::~user_manage_Dialog()
{
    delete ui;
}

void user_manage_Dialog::on_newuser_add_Button_clicked()
{
    QString stuid = ui->newuser_stuid->text();
    QString name = ui->newuser_name->text();
    QString tmp;
    tmp[0]=stuid[4],tmp[1]=stuid[5],tmp[2]=stuid[6];
    int school = tmp.toInt();
    QString password = ui->newuser_password->text();
    QString telnum = ui->newuser_telnum->text();
    int num_limit = ui->newuser_num_limit->currentText().toInt();
    int isAdmin =  ui->newuser_isadmin->currentText() == tr("管理员");

    if (stuid == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写学号！"));
        ui->newuser_stuid->setFocus();
        return;
    }
    if (name == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写姓名！"));
        ui->newuser_name->setFocus();
        return;
    }
    if (password == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写密码！"));
        ui->newuser_password->setFocus();
        return;
    }
    if (telnum == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写联系电话！"));
        ui->newuser_telnum->setFocus();
        return;
    }

    QSqlQuery query_user(tr("SELECT * FROM user WHERE stuid = %1").arg(stuid));

    if (query_user.next()) {
        QMessageBox::warning(this, tr("ERROR"), tr("该用户已存在！"));
        return;
    }

    QSqlQuery(tr("INSERT INTO user(stuid, name, password, school, num_limit, num_borrowed, isAdmin, telnum) VALUES('%1','%2','%3','%4',%5,0,%6,'%7')").arg(stuid).arg(name).arg(password).arg(school).arg(num_limit).arg(isAdmin).arg(telnum));

    ui->newuser_stuid->setText("");
    ui->newuser_name->setText("");
    ui->newuser_password->setText("");
    ui->newuser_telnum->setText("");
    ui->newuser_num_limit->setCurrentIndex(2);

    QMessageBox::information(this, tr("SUCCESS"), tr("新用户添加完成！"));
}

void user_manage_Dialog::on_guide_user_Button_clicked()
{
    QSqlQuery query("SELECT stuid, name, school.school, num_borrowed, isadmin FROM user LEFT JOIN school ON (school.code = user.school) ORDER BY stuid");


    QStandardItemModel* listModel=new QStandardItemModel(0,5,this);
    listModel->insertRow(0);
    listModel->setData(listModel->index(0,0), tr("学号"));
    listModel->setData(listModel->index(0,1), tr("姓名"));
    listModel->setData(listModel->index(0,2), tr("单位"));
    listModel->setData(listModel->index(0,3), tr("借书量"));
    listModel->setData(listModel->index(0,4), tr("身份"));

    int i(1);

    while (query.next()) {
        listModel->insertRow(i);
        user_list_stuid[i] = query.value(0).toString();
        listModel->setData(listModel->index(i,0), query.value(0).toString());
        listModel->setData(listModel->index(i,1), query.value(1).toString());
        listModel->setData(listModel->index(i,2), query.value(2).toString());
        listModel->setData(listModel->index(i,3), query.value(3).toString());
        listModel->setData(listModel->index(i,4), query.value(4).toInt() == 1 ? tr("管理员") : tr("普通用户"));

        i++;
    }

    ui->userview->setModel(listModel);
    ui->group_user->show();
    ui->group_newuser->hide();
    ui->group_overuser->hide();
    ui->group_manageuser->hide();
}

void user_manage_Dialog::on_guide_overuser_Button_clicked() {
    QSqlQuery(tr("UPDATE record SET overtime = TIMESTAMPDIFF(DAY, time_deadline, NOW()) WHERE status = 0"));
    QSqlQuery query_record(tr("SELECT title, name, record.stuid, telnum, overtime, record.status FROM record LEFT JOIN user ON (user.stuid = record.stuid) LEFT JOIN item ON (item.id = record.id) LEFT JOIN book ON (item.isbn = book.isbn) WHERE (record.status = 0 AND overtime > 0) ORDER BY overtime DESC"));

    QStandardItemModel* listModel=new QStandardItemModel(0,5,this);
    listModel->insertRow(0);
    listModel->setData(listModel->index(0,0), tr("书目"));
    listModel->setData(listModel->index(0,1), tr("读者姓名"));
    listModel->setData(listModel->index(0,2), tr("学号"));
    listModel->setData(listModel->index(0,3), tr("联系电话"));
    listModel->setData(listModel->index(0,4), tr("逾期天数"));

    int i(1);
    while (query_record.next()) {
        listModel->insertRow(i);
        user_list_stuid[i] = query_record.value(1).toString();
        listModel->setData(listModel->index(i,0), query_record.value(0).toString());
        listModel->setData(listModel->index(i,1), query_record.value(1).toString());
        listModel->setData(listModel->index(i,2), query_record.value(2).toString());
        listModel->setData(listModel->index(i,3), query_record.value(3).toString());
        listModel->setData(listModel->index(i,4), query_record.value(4).toString());

        i++;
    }

    ui->overuserview->setModel(listModel);
    ui->group_user->hide();
    ui->group_newuser->hide();
    ui->group_overuser->show();
    ui->group_manageuser->hide();
}

void user_manage_Dialog::on_guide_newuser_Button_clicked()
{
    ui->group_newuser->show();
    ui->group_overuser->hide();
    ui->group_user->hide();
    ui->group_manageuser->hide();
}

void user_manage_Dialog::on_manageuser_modify_Button_clicked()
{
    QString stuid = ui->manage_stuid->text();
    int num_limit = ui->manage_num_limit->currentText().toInt();
    int isAdmin = ui->manage_isadmin->currentText() == tr("管理员") ? 1 : 0;
    QString name = ui->manage_name->text();
    QString telnum = ui->manage_telnum->text();
    QString password = ui->manage_password->text();

    if (name == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写姓名！"));
        ui->newuser_name->setFocus();
        return;
    }
    if (password == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写密码！"));
        ui->newuser_password->setFocus();
        return;
    }
    if (telnum == "") {
        QMessageBox::warning(this, tr("WARNING"), tr("请填写联系电话！"));
        ui->newuser_telnum->setFocus();
        return;
    }

    QSqlQuery (tr("UPDATE user SET name = '%1', telnum = '%2', password = '%3', num_limit = %4, isadmin = %5 WHERE stuid = '%6'").arg(name).arg(telnum).arg(password).arg(num_limit).arg(isAdmin).arg(stuid));

    QMessageBox::information(this, tr("SUCCESS"), tr("用户信息修改成功！"));
    user_manage_Dialog::on_guide_user_Button_clicked();
}

void user_manage_Dialog::on_userview_clicked(const QModelIndex &index)
{

    if (index.row() < 1) return;
    QSqlQuery query(tr("SELECT name, password, telnum, num_limit FROM user WHERE stuid = '%1'").arg(user_list_stuid[index.row()]));

    if (!query.next()) {
        QMessageBox::information(this, tr("ERROR"), tr("未检索到该记录！"));
        return;
    }

    ui->manage_name->setText(query.value(0).toString());
    ui->manage_password->setText(query.value(1).toString());
    ui->manage_telnum->setText(query.value(2).toString());
    ui->manage_num_limit->setCurrentText(query.value(3).toString());
    ui->manage_stuid->setText(tr("%1").arg(user_list_stuid[index.row()]));

    ui->group_manageuser->show();
    ui->group_newuser->hide();
    ui->group_user->hide();
}

void user_manage_Dialog::on_manageuser_delete_Button_clicked() {
    QString stuid = ui->manage_stuid->text();
    if(TJUL.stuid==stuid){
        QMessageBox::information(this, tr("ERROR"), tr("无法删除已登录用户！"));
        return;
    }

    QSqlQuery(tr("DELETE FROM user WHERE stuid = '%1'").arg(stuid));

    QMessageBox::information(this, tr("SUCCESS"), tr("用户 %1 已被成功删除！").arg(stuid));
    user_manage_Dialog::on_guide_user_Button_clicked();
}
