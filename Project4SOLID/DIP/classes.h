#ifndef CLASSES_H
#define CLASSES_H

#include <QDebug>

//classes for bad way
class RectangleBad
{
public:
    RectangleBad() {}
    RectangleBad(int width, int height) : m_width(width), m_height(height) {}
    ~RectangleBad() {}

    double calculateArea()
    {
        return m_width * m_height;
    }

    void setWidth(int width)
    {
        m_width = width;
    }

    void setHeight(int height)
    {
        m_height = height;
    }

private:
    int m_width = 0;
    int m_height = 0;
};

class WindowBad
{
public:
    WindowBad() {}
    WindowBad(RectangleBad *rb) : m_rb(rb) {}
    ~WindowBad()
    {
        if(m_rb != nullptr)
            delete m_rb;
    }

    void setRectangle(int width, int height)
    {
        if(m_rb != nullptr)
            delete m_rb;
        m_rb = new RectangleBad(width, height);
    }

    void callCalculateArea()
    {
        if(m_rb != nullptr)
            qDebug() << "Area of RectangleBad from WindowBad is: " << m_rb->calculateArea();
        else
            qDebug() << "Cannot calculate area of non-existent rectangle. RectangleBad is nullptr!";
    }

private:
    RectangleBad *m_rb = nullptr;
};

//classes for good way
class IShape
{
public:
    IShape() {}
    virtual ~IShape() {}
    virtual double calculateArea() = 0;
};

class RectangleGood : public IShape
{
public:
    RectangleGood() {}
    RectangleGood(int width, int height) : m_width(width), m_height(height) {}
    ~RectangleGood() {}

    double calculateArea() override
    {
        return m_width * m_height;
    }

    void setWidth(int width)
    {
        m_width = width;
    }

    void setHeight(int height)
    {
        m_height = height;
    }

private:
    int m_width = 0;
    int m_height = 0;
};

class WindowGood
{
public:
    WindowGood() {}
    ~WindowGood() {}

    void callCalculateArea(IShape *shape)
    {
        qDebug() << "Area of IShape from WindowGood is: " << shape->calculateArea();
    }
};

#endif // CLASSES_H
