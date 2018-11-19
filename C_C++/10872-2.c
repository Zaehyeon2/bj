#include <stdio.h>

int Fact(int N){
  if (N==0) return 1;
  return N*Fact(N-1);
}

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  printf("%d\n", Fact(N));
  return 0;
}
