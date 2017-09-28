#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N, inp[100001] = {},ans = 0;
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%d", &inp[i]);
  }
  for (int i = 0; i < N; i++){
    for (int j = i+1; j < N; j++){
      ans += inp[i]*inp[j];
    }
  }
  printf("%d\n", ans);
  return 0;
}
