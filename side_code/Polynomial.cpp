#include <vector>

class Polynomial
{
  public:
    int power;
    double* coeff; // holds coefficients of polynomial 
                   // in order of x^(index) so the zeroth index holds
                   // the coefficient for xs^0

  // requires a declaration cause of recursion.
  // NEVER RETURN REFERENCE TO LOCAL COPY!
  // Shouldn't have & in return type unless it's something we have 
  //   access to outside of the function.
  friend Polynomial operator +(Polynomial lhs, Polynomial& rhs);

  // here I'm taking lhs as a copy, 
  friend Polynomial operator +(Polynomial lhs, Polynomial& rhs)
  {
    if(lhs.power < rhs.power)
    {
      return rhs + lhs;
    }
    // at this point, we know that lhs is larger than rhs
    for (int i = 0; i < rhs.power; i++)
    {
      lhs.coeff[i] += rhs.coeff[i];
    }
    return lhs;
  }
};

int main()
{
  double* coeff1 = new double[3]; 
  coeff1[0] = 2; coeff1[1] = 3; coeff1[2] = 1; // x**2 + 3*x + 2

  double* coeff2 = new double[4]; 
  coeff2[3] = 1;
  coeff2[0] = 2; coeff2[1] = 3; coeff2[2] = -1; // x**3 - x**2 + 3*x + 2

  Polynomial x = Polynomial();
  x.power = 4;
  x.coeff = coeff2;
  Polynomial y = Polynomial();
  y.power = 3;
  y.coeff = coeff1;

  Polynomial xPy = x + y;

}