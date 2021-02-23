#include <QCoreApplication>
#include <QDebug>

#include "classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SquareBad *sb = new SquareBad(3);
    RectangleBad *rb = new SquareBad(3); //this is where LSP is broken
    SquareGood *sg = new SquareGood(4);

    qDebug() << "Area of bad square: " << sb->calculateArea();
    qDebug() << "Area of bad rectangle: " << rb->calculateArea();
    qDebug() << "Area of good square: " << sg->calculateArea();

    delete sb;
    delete rb;
    delete sg;

    return 0;

    //return a.exec();
}
