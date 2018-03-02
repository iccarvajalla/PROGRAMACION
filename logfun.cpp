#include <iostream>
#include <cmath>

int main()
{
  double x = 2;
  for( x = 0.1; x<= 1.0e4; x *= 2) {
    std::cout << x << "    " << std::log2(x) << "\n";

  }
  return 0;
}

    
