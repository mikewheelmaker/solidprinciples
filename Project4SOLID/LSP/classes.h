#ifndef CLASSES_H
#define CLASSES_H

//classes for bad way
class RectangleBad
{
public:
    RectangleBad() {}
    RectangleBad(int width, int height) : m_width(width), m_height(height) {}
    virtual ~RectangleBad() {}

    double calculateArea()
    {
        return m_width * m_height;
    }

    virtual void setWidth(int width)
    {
        m_width = width;
    }

    virtual void setHeight(int height)
    {
        m_height = height;
    }

protected:
    int m_width = 0;
    int m_height = 0;
};

class SquareBad : public RectangleBad
{
public:
    SquareBad() : RectangleBad() {}
    SquareBad(int side) : RectangleBad(side, side) {}
    ~SquareBad() {}
    void setWidth(int width) override
    {
        m_width = m_height = width;
    }

    void setHeight(int height) override
    {
        m_width = m_height = height;
    }
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

class SquareGood : public Shape
{
public:
    SquareGood() {}
    SquareGood(int side) : m_side(side) {}
    ~SquareGood() {}

    double calculateArea() override
    {
        return m_side * m_side;
    }

private:
    int m_side = 0;
};

#endif // CLASSES_H
