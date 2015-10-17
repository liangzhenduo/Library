QT       += core \
            gui \
            sql \
            widgets

TARGET = Library
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user_dialog.cpp \
    book_dialog.cpp \
    returnbook_dialog.cpp \
    usermanagement_dialog.cpp \
    managebook_dialog.cpp \
    rank_dialog.cpp \
    item_dialog.cpp

HEADERS  += mainwindow.h \
    qlms_public.h \
    user_dialog.h \
    book_dialog.h \
    returnbook_dialog.h \
    usermanagement_dialog.h \
    managebook_dialog.h \
    rank_dialog.h \
    item_dialog.h

FORMS    += mainwindow.ui \
    user_dialog.ui \
    book_dialog.ui \
    returnbook_dialog.ui \
    usermanagement_dialog.ui \
    managebook_dialog.ui \
    rank_dialog.ui \
    item_dialog.ui

RESOURCES += \
    resource.qrc
