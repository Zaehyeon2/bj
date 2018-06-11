#include <cstdio>

int sum;

int main() {
  int N, K; scanf("%d%d", &N, &K);
  for(int i = 0; i < K; i++){
    int tmp; scanf("%d", &tmp);
    sum += tmp / 2 + tmp % 2;
  }
  if(sum >= N) printf("%s\n", "YES");
  else printf("%s\n", "NO");
}
