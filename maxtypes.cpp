#include <iostream>

int max(int a, int b)
{
  int m = a;
  if(b >= a) {
    m = b;
  }
  return m;

}

int main(void)
{
  std::cout << max(12,5) << std::endl;

  return 0;
}
