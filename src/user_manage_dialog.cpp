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
    if (ui->newuser_telnum->text() == "" || ui->newuser_num_limit->text() == ""|| ui->newuser_password->text() == "" || ui->newuser_stuid->text() == "" || ui->newuser_name->text() == "") {
        QMessageBox::warning(this, tr("出错啦"), tr("新用户的具体信息没有填写完整"));
        return;
    }

    QString stuid = ui->newuser_stuid->text();
    QString tmp;
    tmp[0]=stuid[4],tmp[1]=stuid[5],tmp[2]=stuid[6];
    int department = tmp.toInt();
    QString password = ui->newuser_password->text();
    QString telnum = ui->newuser_telnum->text();
    QString name = ui->newuser_name->text();
    int num_limit = ui->newuser_num_limit->text().toInt();
    int isAdmin =  ui->newuser_isadmin->currentText() == tr("管理员");

    stuid.replace("'","");
    name.replace("'","");
    password.replace("'","");
    telnum.replace("'","");

    if (num_limit < 0) {
        QMessageBox::warning(this, tr("出错啦"), tr("用户借阅图书上限不能小于0哦"));
        return;
    }

    QSqlQuery query_user(tr("SELECT * FROM qlms_user WHERE stuid = %1").arg(stuid));

    if (query_user.next()) {
        QMessageBox::warning(this, tr("出错啦"), tr("您要添加的学号已经被使用过咯"));
        return;
    }

    QSqlQuery(tr("INSERT INTO qlms_user (stuid,name,password,department,num_limit,num_borrowed,isAdmin,telnum) VALUES('%1','%2','%3','%4',%5,0,%6,'%7')").arg(stuid).arg(name).arg(password).arg(department).arg(num_limit).arg(isAdmin).arg(telnum));

    ui->newuser_name->setText("");
    ui->newuser_num_limit->setText(tr("7"));
    ui->newuser_password->setText("");
    ui->newuser_stuid->setText("");
    ui->newuser_telnum->setText("");

    QMessageBox::information(this, tr("操作成功"), tr("恭喜您，新用户已经成功创建完毕"));
}

void user_manage_Dialog::on_guide_user_Button_clicked()
{
    QSqlQuery query("SELECT qlms_user.stuid, qlms_user.name, department.school, qlms_user.num_borrowed, qlms_user.isadmin FROM qlms_user LEFT JOIN department ON department.code = qlms_user.department ORDER BY stuid;");


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
        listModel->setData(listModel->index(i,4), query.value(4).toInt() == 1 ? tr("管理员") : tr("读者"));

        i++;
    }

    ui->userview->setModel(listModel);
    ui->group_user->show();
    ui->group_newuser->hide();
    ui->group_overuser->hide();
    ui->group_manageuser->hide();
}

void user_manage_Dialog::on_guide_overuser_Button_clicked() {
    QSqlQuery(tr("UPDATE qlms_record SET overtime = TIMESTAMPDIFF(DAY, time_deadline, NOW()) WHERE status = 0;"));
    QSqlQuery query_record(tr("SELECT qlms_book.title, qlms_user.name, qlms_record.stuid, qlms_user.telnum, qlms_record.overtime, qlms_record.status FROM qlms_record LEFT JOIN qlms_user ON qlms_user.stuid = qlms_record.stuid LEFT JOIN qlms_book_item ON qlms_book_item.id = qlms_record.id LEFT JOIN qlms_book ON qlms_book_item.isbn = qlms_book.isbn WHERE qlms_record.status=0 AND qlms_record.overtime>0 ORDER BY qlms_record.overtime DESC"));

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
    int num_limit = ui->manage_num_limit->text().toInt();
    int isAdmin = ui->manage_isadmin->currentText() == tr("管理员") ? 1 : 0;
    QString name = ui->manage_name->text();
    QString department = ui->manage_department->text();
    QString password = ui->manage_password->text();

    name.replace("'","");
    department.replace("'","");
    password.replace("'","");

    if (ui->manage_stuid->text() == "") {
        QMessageBox::warning(this, tr("出错啦"), tr("窗口非法调用"));
        return;
    }

    if (num_limit < 0) {
        QMessageBox::warning(this, tr("出错啦"), tr("用户可借阅图书的上限不能为负数"));
        return;
    }

    if (name == "" || department == "" || password == "") {
        QMessageBox::warning(this, tr("出错啦"), tr("用户信息没有填写完整，请检查后再点击修改按钮"));
        return;
    }

    QSqlQuery (tr("UPDATE qlms_user SET name = '%1', department = '%2', password = '%3', num_limit = %4, isadmin = %5 WHERE stuid = %6").arg(name).arg(department).arg(password).arg(num_limit).arg(isAdmin).arg(stuid));

    QMessageBox::information(this, tr("修改成功"), tr("恭喜您，已经成功修改完毕"));
    user_manage_Dialog::on_guide_user_Button_clicked();
}

void user_manage_Dialog::on_userview_clicked(const QModelIndex &index)
{

    if (index.row() < 1) return;
    QSqlQuery query(tr("SELECT name, password, department, num_limit FROM qlms_user WHERE stuid = %1").arg(user_list_stuid[index.row()]));

    if (!query.next()) {
        QMessageBox::information(this, tr("出错啦"), tr("您要操作的用户不存在哦"));
        return;
    }

    ui->manage_name->setText(query.value(0).toString());
    ui->manage_password->setText(query.value(1).toString());
    ui->manage_department->setText(query.value(2).toString());
    ui->manage_num_limit->setText(query.value(3).toString());
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

    QSqlQuery(tr("DELETE FROM qlms_user WHERE stuid = %1").arg(stuid));

    QMessageBox::information(this, tr("删除成功"), tr("用户 %1 已被成功删除！").arg(stuid));
    user_manage_Dialog::on_guide_user_Button_clicked();
}
