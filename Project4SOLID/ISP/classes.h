#ifndef CLASSES_H
#define CLASSES_H

#include <QDebug>

//classes for bad way
class IDevice
{
public:
    virtual ~IDevice() {}
    virtual void print() = 0;
    virtual void scan() = 0;
    virtual void fax() = 0;
};

class MultiFunctionalPrinterBad : public IDevice
{
public:
    void print() override
    {
        qDebug() << "MultiFunctionalPrinterBad print()";
    }

    void scan() override
    {
        qDebug() << "MultiFunctionalPrinterBad scan()";
    }

    void fax() override
    {
        qDebug() << "MultiFunctionalPrinterBad fax()";
    }
};

class SimplePrinterBad : public IDevice
{
public:
    void print() override
    {
        qDebug() << "SimplePrinterBad print()";
    }

    void scan() override
    {
        qDebug() << "SimplePrinterBad scan()"; //not needed
    }

    void fax() override
    {
        qDebug() << "SimplePrinterBad fax()";  //not needed
    }
};

class ScannerBad : public IDevice
{
public:
    void print() override
    {
        qDebug() << "ScannerBad print()";      //not needed
    }

    void scan() override
    {
        qDebug() << "ScannerBad scan()";
    }

    void fax() override
    {
        qDebug() << "ScannerBad fax()";        //not needed
    }
};

class FaxMachineBad : public IDevice
{
public:
    void print() override
    {
        qDebug() << "FaxMachineBad print()";   //not needed
    }

    void scan() override
    {
        qDebug() << "FaxMachineBad scan()";    //not needed
    }

    void fax() override
    {
        qDebug() << "FaxMachineBad fax()";
    }
};

//classes for good way
class IPrinter
{
public:
    virtual ~IPrinter() {}
    virtual void print() = 0;
};

class IScanner
{
public:
    virtual ~IScanner() {}
    virtual void scan() = 0;
};

class IFaxxer
{
public:
    virtual ~IFaxxer() {}
    virtual void fax() = 0;
};

class MultiFunctionalPrinterGood : public IPrinter, public IScanner, public IFaxxer
{
public:
    void print() override
    {
        qDebug() << "MultiFunctionalPrinterGood print()";
    }

    void scan() override
    {
        qDebug() << "MultiFunctionalPrinterGood scan()";
    }

    void fax() override
    {
        qDebug() << "MultiFunctionalPrinterGood fax()";
    }
};

class SimplePrinterGood : public IPrinter
{
public:
    void print() override
    {
        qDebug() << "SimplePrinterGood print()";
    }
};

class ScannerGood : public IScanner
{
public:
    void scan() override
    {
        qDebug() << "ScannerGood scan()";
    }
};

class FaxMachineGood : public IFaxxer
{
public:
    void fax() override
    {
        qDebug() << "FaxMachineGood fax()";
    }
};

#endif // CLASSES_H
