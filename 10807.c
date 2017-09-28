#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, sum = 0, V;
  scanf("%d", &N);
  int S[100] = {};
  for (int i = 0; i < N; i++) {
    scanf("%d", &S[i]);
  }
  scanf("%d", &V);
  for (int i = 0; i < N; i++) {
    if (S[i] == V){
      sum += 1;
    }
  }
  printf("%d\n", sum);
  return 0;
}
