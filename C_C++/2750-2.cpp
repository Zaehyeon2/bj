#include <cstdio>
#include <algorithm>

int inp[1001];

int main() {
  int N; scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d", &inp[i]);
  }
  std::sort(inp, inp + N);
  for(int i = 0; i < N; i++){
    printf("%d\n", inp[i]);
  }

}
