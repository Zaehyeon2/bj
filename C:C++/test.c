#include <stdio.h>

int a1[101][101];
int a2[101][101];
int a3[101][101];

int main(){
  int N, M; scanf("%d%d", &N, &M);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      scanf("%d", &a1[i][j]);
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      scanf("%d", &a2[i][j]);
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      a3[i][j] = a1[i][j] + a2[i][j];
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      printf("%d ", a3[i][j]);
    }
    printf("\n");
  }
}



// abcd
// efgh
// ijkl
