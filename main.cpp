#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("请选择你需要直播的课程");
    w.setWindowFlags(w.windowFlags()&~Qt::WindowMinMaxButtonsHint);

    //去掉图标
    //w.setWindowFlags(Qt::Drawer);
    w.setFixedSize(800,670);
    w.show();

    return a.exec();
}
