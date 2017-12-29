#include <cstdio>
#include <algorithm>

using namespace std;

int mat[1002][1002];

int Max3(int a, int b, int c){
  return max(a, max(b, c));
}

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  for (int i = 1; i <= N; i++){
    for (int j = 1; j <= M; j++){
      scanf("%d", &mat[i][j]);
    }
  }
  for (int i = 1; i <= N; i++){
    for (int j = 1; j <= M; j++){
      mat[i][j] = Max3(mat[i-1][j] + mat[i][j], mat[i][j-1] + mat[i][j], mat[i-1][j-1] + mat[i][j]);
    }
  }
  printf("%d\n", mat[N][M]);
}
