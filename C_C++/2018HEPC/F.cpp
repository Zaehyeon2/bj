#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

int inp[101][101];
int ans = 0;
int dir[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
int N, M;

int dfs(int y, int x) {
  for(int i = 0; i < 4; i++) {
    int yy = y + dir[i][1]; int xx = x + dir[i][0];
    if (yy < 0 || xx < 0 || yy >= N || xx >= M) {
      return 0;
    }
    if (inp[y][x] <= inp[yy][xx]) {
      return dfs(yy, xx) + inp[yy][xx] - inp[y][x];
    }
  }
}

int main() {
  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      scanf("%d", &inp[i][j]);
    }
  }
  for(int i = 1; i < N - 1; i++){
    for(int j = 1; j < M - 1; j++){
      ans += dfs(i,j);
    }
  }
  printf("%d\n", ans);
}
