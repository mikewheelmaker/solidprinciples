#include <QCoreApplication>

#include "classes.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MultiFunctionalPrinterBad *mfpb = new MultiFunctionalPrinterBad();
    SimplePrinterBad *spb = new SimplePrinterBad();
    ScannerBad *sb = new ScannerBad();
    FaxMachineBad *fmb = new FaxMachineBad();

    qDebug() << "Bad way";
    mfpb->print();
    mfpb->scan();
    mfpb->fax();
    spb->print();
    sb->scan();
    fmb->fax();

    MultiFunctionalPrinterGood *mfpg = new MultiFunctionalPrinterGood();
    SimplePrinterGood *spg = new SimplePrinterGood();
    ScannerGood *sg = new ScannerGood();
    FaxMachineGood *fmg = new FaxMachineGood();

    qDebug() << "Good way";
    mfpg->print();
    mfpg->scan();
    mfpg->fax();
    spg->print();
    sg->scan();
    fmg->fax();

    delete mfpb;
    delete spb;
    delete sb;
    delete fmb;
    delete mfpg;
    delete spg;
    delete sg;
    delete fmg;

    return 0;

    //return a.exec();
}
