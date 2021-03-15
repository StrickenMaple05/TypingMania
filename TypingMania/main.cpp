#include "mainwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QStringList paths = QCoreApplication::libraryPaths();
//    paths.append(".");
//    paths.append("imageformats");
//    paths.append("platforms");
//    paths.append("sqldrivers");
//    QCoreApplication::setLibraryPaths(paths);

    MainWidget w;
    w.show();
    return a.exec();
}
