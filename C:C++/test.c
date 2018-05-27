#include <stdio.h>

int sum(int a, int b) {
  int ret = a + b;
  return ret;
}

int main(){
  sum(3, 4);
  printf("%d\n", sum(3, 4));
}
