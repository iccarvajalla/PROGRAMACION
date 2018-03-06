#include <iostream>

int main()
{
  // m = 5, n = 2

  int m, n;
  m = 5;
  n = 2;

  m *= n++;
  m += --n;

  std::cout << m; "\n";

  return 0;

}
