#include <iostream>
#include <string>

void printh(std::string name)
{
  std::cout << "hola " << name << "\n";
}

int main(void)
{
  std::string myname = "Italo";

  printh(myname);

  return 0;
}
