#include <stdio.h>
#include <string.h>

int main(void)
{
  int a = 1 << 30;
  printf("%d\n", a);
  printf("%d\n", a >> 3);
return 0;
}
