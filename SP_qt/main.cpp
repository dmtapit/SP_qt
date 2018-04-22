#include "sp_qt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SP_qt w;
    w.show();

    return a.exec();
}
