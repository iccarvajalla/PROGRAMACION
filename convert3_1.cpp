//conversion de furlong a yardas

#include <iostream>

int convert(int b)// prototipo de funcion
{
  int x;

  std::cout << "inserte los furlong a convertir: \n";
  std::cin >> x;
  
  x = (x*b)/1; //llamada de la funcion

  return x;
}

int main()
{
  int y;

  y = convert(220);

  std::cout << "el resultado es: " << y <<" yardas \n";
    
  return 0;

}
