#include <cstdio>

long long f[1002];

int main() {
  int N; scanf("%d", &N);
  f[1] = 1; f[2] = 3;
  for ( int i = 3; i <= N; i ++){
    f[i] = (f[i-1] + 2 * f[i-2]);
  }
  printf("%lld\n", f[N]);
}
