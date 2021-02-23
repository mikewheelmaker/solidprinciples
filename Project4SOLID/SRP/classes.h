#ifndef CLASSES_H
#define CLASSES_H

#include <QDebug>
#include <QString>

class BadClass
{
public:
    BadClass()
    {

    }
    ~BadClass()
    {

    }

    void doSomething()
    {
        qDebug() << "Do some calculations";
        qDebug() << "Write result and some text to a file";
    }
};

class FileWriter;

class GoodClass
{
public:
    GoodClass()
    {

    }
    ~GoodClass()
    {

    }

    void doCalculations()
    {
        qDebug() << "Do some calculations";
    }

    QString getData()
    {
        return m_data;
    }

private:
    QString m_data;
};

class FileWriter
{
public:
    FileWriter()
    {

    }
    ~FileWriter()
    {

    }

    void writeToFile(const QString &data)
    {
        Q_UNUSED(data);
        qDebug() << "Write result and some text to a file";
    }
};

#endif // CLASSES_H
