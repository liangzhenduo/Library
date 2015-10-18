QT       += core \
            gui \
            sql \
            widgets

TARGET = Library
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    user_dialog.cpp \
    book_dialog.cpp \
    rank_dialog.cpp \
    item_dialog.cpp \
    book_manage_dialog.cpp \
    book_return_dialog.cpp \
    user_manage_dialog.cpp

HEADERS  += public.h \
    mainwindow.h \
    user_dialog.h \
    book_dialog.h \
    rank_dialog.h \
    item_dialog.h \
    book_manage_dialog.h \
    book_return_dialog.h \
    user_manage_dialog.h

FORMS    += mainwindow.ui \
    user_dialog.ui \
    book_dialog.ui \
    rank_dialog.ui \
    item_dialog.ui \
    book_manage_dialog.ui \
    book_return_dialog.ui \
    user_manage_dialog.ui

RESOURCES += \
    resource.qrc
