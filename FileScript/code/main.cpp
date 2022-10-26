#include "FileScript.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileScript w;
    w.show();
    return a.exec();
}
