#include "doctermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DocterMainWindow w;
    w.show();

    return a.exec();
}
