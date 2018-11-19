#include <cstdio>

int sosu[1000001];

int main() {
  int M, N; scanf("%d %d", &M, &N);
  for ( int i = 2; i < 1000001; i ++){
    if(sosu[i] == 0) {
      for ( int j = i * i; j < 1000001; j ++){
        if (j % i == 0) {
          sosu[j] = 1;
          printf("%d %d\n", i, j);
        }
      }
    }
  }
  for (int i = M; i <= N; i++) {
    if (sosu[i] == 0){
      printf("%d\n", i);
    }
  }
}
