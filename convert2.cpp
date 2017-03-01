#include <iostream>
//conversion de grados fahrenheit a centigrados

int main(void)
{
  int gradfah, gradcent;


  std::cout <<"ingrese grados fahrenheit" << std::endl;
  std::cin >> gradfah;
  gradcent = (gradfah - 32)*(5/9);
  std::cout <<"los grados centigrados son:" << gradcent << std::endl;

  return 0;
}  
  

  
