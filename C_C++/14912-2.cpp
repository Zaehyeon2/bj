#include <cstdio>

int main() {
  int n, d; scanf("%d%d", &n, &d);
  int sum = 0;
  for(int i = 1; i <= n; i++){
    int tmp = i;
    while(tmp > 0) {
      if (tmp % 10 == d) sum++;
      tmp /= 10;
    }
  }
  printf("%d\n", sum);
}
