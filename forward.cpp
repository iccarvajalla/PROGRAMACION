#include <iostream>
#include <cmath>
#include <cstdio>

double fun(double x); 
double fundevforward(double x, double h);
double fderivcentral(double x, double h);
double fderivrichardsonforward(double x, double h);
double fdrichforcentral(double x, double h);
			  
int main(void)
{
  double x = M_PI/3;
  double h = 0.1;
  
  std::printf("%25.16e\n", std::cos(x));
  std::printf("%25.16e\n", fundevforward(x, h));
  std::printf("%25.16e\n", fderivcentral(x, h));
  std::printf("%25.16e\n",  
  
  return 0;

}

double fun(double x)
{
  result = std::sin(x);
  return result;
}

double fundevforward(double x, double h)
{
  double result = (f(x + h) - f(x))/h;

  return 0;
}

double fderivcentral(double x, double h)

  return 0;
}

double fdrichforcentral(double x, double h)

{
  
