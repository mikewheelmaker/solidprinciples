#include <QCoreApplication>
#include <QDebug>

#include "classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //bad way
    RectangleBad *rb = new RectangleBad(2, 3);
    qDebug() << "Area of bad rectangle: " << rb->calculateArea();
    CircleBad *cb = new CircleBad(4);
    qDebug() << "Area of bad circle: " << cb->calculateArea();

    //good way
    RectangleGood *rg = new RectangleGood(3, 4);
    qDebug() << "Area of good rectangle: " << rg->calculateArea();
    CircleGood *cg = new CircleGood(5);
    qDebug() << "Area of good circle: " << cg->calculateArea();

    delete rb;
    delete cb;
    delete rg;
    delete cg;

    return 0;

    //return a.exec();
}
