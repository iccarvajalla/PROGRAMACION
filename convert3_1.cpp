//conversion de furlong a yardas

#include <iostream>

int convert(int b) //t
{
  int x;
  
  std::cin >> x;

  x = (x*b)/1;

  return x;
}

int main()
{
  int y;

  std::cin >> y;

  y = convert(x,200);

  std::cout << "el resultado es: " << y << std::endl;
    
  return 0;

}
