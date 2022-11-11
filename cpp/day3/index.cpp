#include <iostream>

class Point {
private:
    float x;
    float y;
public:
    Point();
    Point(const Point &);
    Point(const float, const float);
    void setX(float);
    void setY(float);
    float getX() const;
    float getY() const;
    void print() const;

};

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(const Point & mp)
{
    this->x = mp.x;
    this->y = mp.y;
}

Point::Point(const float _x, const float _y)
{
    x = _x;
    y = _y;
}

void Point::print() const 
{
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

void Point::setX(float _x)
{
    x = _x;
}

void Point::setY(float _y)
{
    y = _y;
}

float Point::getX() const
{
    return x;
}
float Point::getY() const
{
    return y;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) 
{
return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
float A = area (x1, y1, x2, y2, x3, y3);

float A1 = area (x, y, x2, y2, x3, y3);

float A2 = area (x1, y1, x, y, x3, y3);

float A3 = area (x1, y1, x2, y2, x, y); 
    
return (A == A1 + A2 + A3);
}


int main() 
{
    std::cout << "this is X and Y"<< std::endl;
    Point mp; 
    mp.setX(0);
    mp.setY(0);
    float Ax = mp.getX();
    float Ay = mp.getY();
    mp.print();
    mp.setX(20);
    mp.setY(0);
    float Bx = mp.getX();
    float By = mp.getY();
    mp.print();
    mp.setX(30);
    mp.setY(10);
    float Cx = mp.getX();
    float Cy = mp.getY();
    mp.print();
    mp.setX(31);
    mp.setY(11);
    float Dx = mp.getX();
    float Dy = mp.getY();
    mp.print();
    if (isInside(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy))
    std::cout <<"Inside";
    else
    std::cout <<"Not Inside";

    return 0;
}
