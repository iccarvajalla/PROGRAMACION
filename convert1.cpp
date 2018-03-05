#include <iostream>

int convert(int, int, int);

int main()

{
  int a, b, c;
  
  std::cin >> a;

  return 0;

}

int convert(int a, int  b)
{
  b = 220;
  a = (a*b)/1;

  std::cout << a << std::endl;

   return a;
}
