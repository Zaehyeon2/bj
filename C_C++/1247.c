#include <stdio.h>

int T;
long double sum, N;
int main(int argc, char const *argv[]) {

  for (size_t i = 0; i < 3; i++) {
    scanf("%d", &T);
    sum = 0;
    for (size_t j = 0; j < T; j++) {
      scanf("%Lf", &N);
      sum += N;
      // printf("%Lf\n", sum);
    }
    if (sum == 0){
      printf("0\n");
    }
    else if ( sum < 0){
      printf("-\n");
    }
    else{
      printf("+\n");
    }
  }
  return 0;
}
