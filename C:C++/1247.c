#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (size_t i = 0; i < 3; i++) {
    int T;
    scanf("%d", &T);
    long long sum = 0, N;
    for (size_t j = 0; j < T; j++) {
      scanf("%lld", &N);
      sum += N;
      printf("%lld\n", sum);
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
