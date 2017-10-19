#include <stdio.h>

int main(){
  int A, B, sum;
  scanf("%d %d", &A, &B);
  for (int roop = A; roop<B; roop++){
    sum += roop * roop;
  }
  printf("%d", sum);
}
