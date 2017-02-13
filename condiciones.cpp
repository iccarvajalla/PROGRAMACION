//voy a usar los operadores de condicines
#include <iostream>


int main(void)
{
  bool a();
  char respuesta = 0;
  std::cout <<"desea continuar (s o n)?" << std::endl;
  std::cin >> respuesta;

  if(respuesta == 's') return true;
  if(respuesta == 'n') return false;

  return 0;
}
