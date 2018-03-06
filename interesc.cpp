//programa que calcula el interes compuesto
//aqui no hay funciones :v
#include <iostream>
#include <cmath>

int main()
{
  double F, P, i, n;
  
  std::cout << "\n";
  std::cout << "ingrese el interes: "; std::cin >> i; std::cout << "\n";
  
  std::cout << "ingrese el periodo en meses: "; std::cin >> n; std::cout << "\n";
  
  std::cout << "ingrese una cantidad de dinero: "; std::cin >> P; std::cout << "\n";
  

  F = P*pow((1 + i),n);

  std::cout << "Su cantidad final de dinero es:  " << F << "\n";

  return 0;

}


  
