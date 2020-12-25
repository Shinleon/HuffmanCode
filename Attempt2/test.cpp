#include <cmath>
#include <string>
#include <iostream>

class Point2D
{
  private:
    double x;
    double y;

  public:
    Point2D(){this->x = 0; this->y = 0;}
    Point2D (double x, double y){this->x = x; this->y = y;}
    double getX(){return this->x;}
    void setX(double input){this->x = input;}
    double getY(){return this->y;}
    void setY(double input){this->y = input;}
    double getDist(Point2D* other)
    {
      double sqrdx = pow(this->x - other->getX(), 2);
      double sqrdy = pow(this->y - other->getY(), 2);
      return sqrt(sqrdx + sqrdy);
    }
    // https://stackoverflow.com/questions/56477772/c-when-to-use-an-in-front-of-an-operator-overloading-function
    Point2D operator +(Point2D& other)
    {
      Point2D ret;
      ret.x = other.x + this->x;
      ret.y = other.y + this->y;
      return ret;
    }
    std::string toString()
    {
      return "X: " + std::to_string(this->x) + "\tY: " + std::to_string(this->y);
    }

};

int main()
{
  Point2D A(3, 4);
  Point2D* B = new Point2D(12, 5);
  Point2D C = (A) + *B;
  std::cout << C.toString() + "\n" ;
}