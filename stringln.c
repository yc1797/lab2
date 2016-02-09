#include <studio.h>

int stringLength(string a)
{
  int count = 0;
  for(int i = 0; a[i] != "\0")
  {
    count++;
    i++;
  }

  return count;
}

int main()
{
  string a = "Hello, World";

  int strLen = stringLength(a);
  printf("Length of %s is %i", a, strLen);
  return 0;
}
