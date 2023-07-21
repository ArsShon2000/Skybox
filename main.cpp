#include "mainwindow.h"
#include "qopenglskyboxwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    QOpenGLSkyboxWidget widget(":/front.jpg",
                               ":/back.jpg",
                               ":/top.jpg",
                               ":/bottom.jpg",
                               ":/left.jpg",
                               ":/right.jpg");
    widget.show();
    return a.exec();
}
