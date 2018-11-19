#include <cstdio>

char arr[21][21];
char puzzle[11][11];

int main() {
  int M, N; scanf("%d %d", &M, &N);
  int U, L, R, D; scanf("%d%d%d%d", &U, &L, &R, &D);
  for(int i = 0; i < M; i++){
    scanf("%s", puzzle[i]);
  }
  for(int i = 0; i < M + U + D; i++){
    for (int j = 0; j < N + L + R; j++) {
      if((i + j) % 2 == 0) arr[i][j] = '#';
      else arr[i][j] = '.';
      if(U <= i && i < M + U && L <= j && j < N + L){
        arr[i][j] = puzzle[i-U][j-L];
      }
    }
  }
  for(int i = 0; i < M + U + D; i++){
    for (int j = 0; j < N + L + R; j++) {
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }
}
