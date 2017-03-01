#include <iostream>

int main(void)
{
  int i;

  for(i=1; i <= 50; i++) //bucle for de 1 a 50 enteros

    {
      std::cout << i; //muestra el numero
      if(i%3 == 0);
      std::cout <<"es multiplo de 3" << std::endl;
      else std::cout <<"no es multiplo de 3" std::endl;
    }

  std::cin.get(void);

  return 0;

}
  
