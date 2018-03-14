#include <iostream>

double sumfor(int N)
{
  int n = 0, sum = 0;
  for(n = 1; n <= N; n++){

    sum += n;
  }

  return sum;
}
double sumwhile(int N)
{
  int n = 1, sum = 0;
  while(n <= N) {

    sum += n;
    n++;
  }

  return sum;

}

int main(void)
{
  std::cout << sumfor(100) << std::endl;
  std::cout << sumwhile(100) << std::endl;
  
  return 0;
}

