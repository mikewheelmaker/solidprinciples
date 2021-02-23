#include <QCoreApplication>
#include <QDebug>

#include "classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //varianta bad
    BadClass *bc = new BadClass();
    bc->doSomething();
    delete bc;

    //varianta good
    GoodClass *gc = new GoodClass();
    FileWriter *fw = new FileWriter();
    gc->doCalculations();
    fw->writeToFile(gc->getData());
    delete gc;
    delete fw;
    return 0;

    //return a.exec();
}
