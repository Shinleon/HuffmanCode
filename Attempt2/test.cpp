#include <cmath>

class Point2D
{
  private:
    double x;
    double y;

  public:
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

};

int main()
{
  Point2D** x = new Point2D*;
  *x = nullptr;

}