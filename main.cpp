#include <QtGui/QApplication>
#include "app.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    App w;
    w.show();

    return a.exec();
}
