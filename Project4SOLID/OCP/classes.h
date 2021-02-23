#ifndef CLASSES_H
#define CLASSES_H

//classes for bad way
class RectangleBad
{
public:
    RectangleBad(int width, int height) : m_width(width), m_height(height) {}
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

class CircleBad
{
public:
    CircleBad(int radius) : m_radius(radius) {}
    double calculateArea()
    {
        return 3.14 * m_radius * m_radius;
    }

    void setRadius(int radius)
    {
        m_radius = radius;
    }

private:
    int m_radius = 0;
};

//classes for good way
class Shape
{
public:
    Shape() {}
    virtual ~Shape() {}
    virtual double calculateArea() = 0;
};

class RectangleGood : public Shape
{
public:
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

class CircleGood : public Shape
{
public:
    CircleGood(int radius) : m_radius(radius) {}
    ~CircleGood() {}
    double calculateArea() override
    {
        return 3.14 * m_radius * m_radius;
    }

    void setRadius(int radius)
    {
        m_radius = radius;
    }

private:
    int m_radius = 0;
};

#endif // CLASSES_H
