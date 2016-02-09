#include <studio.h>

int convertFtoC(int fah)
{
  return ((5/9)*(fah-32));
}

void display()
{
  printf("Fahrenheit \t Celsius");

  int fah = 0;
  while(fah <= 300)
  {
    printf(fah, "\t", convetFtoC(fah));
    fah += 10;
  }
}

int main()
{
  display();

  return 0;
}
