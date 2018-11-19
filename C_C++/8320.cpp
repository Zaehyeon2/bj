#include <cstdio>
#include <cmath>

int sum = 0;

int main() {
  int N; scanf("%d", &N);
  for(int i = 1; i <= sqrt(N); i++) {
    if(!(N % i)) sum += N / i;
  }
  printf("%d\n", sum);
}
