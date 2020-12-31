#include <cmath>
#include <string>
#include <iostream>

class Point2D
{
  private:
    double x = 0;
    double y = 0;
    double normL2 = 0;

  public:
    // What are member initializer lists?
    // I don't fully understand this line how is x assigned?
    //  Also, does `x(x)` do the same action as `y{y}`
    //  Is there a subtle difference in the paren vs brace?
    Point2D() = default; 
    Point2D (const double x, const double y):x(x), y{y} {}
    
    double getX() const {return x;}
    void setX(const double input){x = input; normL2 = this->NormL2();}
    double getY() const {return y;}
    void setY(const double input){y = input; normL2 = this->NormL2();}

    double getDist(const Point2D& other) const
    {
      double sqrdx = pow(x - other.getX(), 2);
      double sqrdy = pow(y - other.getY(), 2);
      return sqrt(sqrdx + sqrdy);
    }

    double NormL2() const
    {
      return normL2;
    }

    Point2D& operator +=(const Point2D& rhs)
    {
      this->setX(this->getX() + rhs.getX());
      this->setY(this->getY() + rhs.getY());
      return *this;
    }

    Point2D& operator -=(const Point2D& rhs)
    {
      this->setX(this->getX() - rhs.getX());
      this->setY(this->getY() - rhs.getY());
      return *this;
    }

    // Question 3: Is there a slicker way to do these
    //   5 comparison operators?

    bool operator >(const Point2D& rhs) const
    {
      return this->NormL2() > rhs.NormL2();
    }

    bool operator <=(const Point2D& rhs) const
    {
      return !(*this > rhs);
    }

    bool operator <(const Point2D& rhs) const
    {
      return this->NormL2() < rhs.NormL2();
    }

    bool operator >=(const Point2D& rhs) const
    {
      return !(*this < rhs);
    }

    bool operator ==(const Point2D& rhs) const
    {
      return this->NormL2() == rhs.NormL2();
    }

    // "friend", so not a member method
    // take the first one by copy 
    //  return the modified copy.
    friend Point2D operator + (Point2D lhs, const Point2D& rhs )
    {
      return lhs += rhs;
    }

    friend Point2D operator - (Point2D lhs, const Point2D& rhs )
    {
      return lhs -= rhs;
    }

    std::string toString()
    {
      return "X: " + std::to_string(this->x) + "\tY: " + std::to_string(this->y);
    }

};

int main()
{
  Point2D A(3, 4);
  Point2D B(-1, 2);

  std::cout << A.getDist(B) << std::endl; // prints '4.47214'

  Point2D C = A + B;
  std::cout << C.toString() << std::endl; // prints 'X: 2 Y: 6'

  std::cout << (C > B) << std::endl; // prints '1'
}