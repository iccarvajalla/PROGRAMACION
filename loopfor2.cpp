#include <iostream>

int main(void)
{
  int x;
  int y = 2*x;
  for(x = 10; x <= 10e4; x += 10) {
    std::cout << x << "       " << std::cout << y << std::endl;
  }

  return 0;
}
