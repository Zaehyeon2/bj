#include <stdio.h>

int main(int argc, char const *argv[]) {
  int Si, Ji, Max = 0, N;
  for (size_t i = 0; i < 9; i++) {
    for (size_t j = 0; j < 9; j++) {
      scanf("%d", &N);
      if (N > Max){
        Max = N;
        Si = i;
        Ji = j;
      }
    }
  }
  printf("%d\n%d %d\n", Max, Si+1, Ji+1);
  return 0;
}
