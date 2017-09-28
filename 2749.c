#include <stdio.h>

int main(int argc, char const *argv[]) {
  long long F[4] = {};
  long long N,S;
  F[0] = 0;
  F[1] = 1;
  scanf("%lld", &N);
  for (long long i = 0; i < N-1; i++) {
    F[2] = F[1] + F[0];
    F[0] = F[1];
    F[1] = F[2];
  }
  S = F[2];
  printf("%lld\n", S);
  return 0;
}
