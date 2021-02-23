#include <QCoreApplication>

#include "classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RectangleBad *rb = new RectangleBad(2, 3);
    WindowBad *wb = new WindowBad(rb);

    wb->callCalculateArea();

    delete wb;

    RectangleGood *rg = new RectangleGood(3, 4);
    WindowGood *wg = new WindowGood();

    wg->callCalculateArea(rg);
    rg->setHeight(5);
    wg->callCalculateArea(rg);

    delete wg;
    delete rg;

    return 0;

    //return a.exec();
}
