//progrmama que calcula diametro, perimetro y area de un circulo 
//aqui tampoco hay funciones :V
#include <iostream>
#include <cmath>

int main()
{
  double r, d, p, a;
  std::cout << "ingrese un radio" <<  std::endl;
  std::cin >> r;

  d = 2*r;

  std::cout << " el diametro es:  " << d << std::endl;

  p = 2*M_PI*r;

  std::cout << " el perimetro es:  " << p << std::endl;

  a = M_PI*pow(r,2);

  std::cout << " el area es:  " << a << "  unidades cuadradas" << std::endl;

  
  return 0;

}
