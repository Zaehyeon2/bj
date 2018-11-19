#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int N, M;
int arr[101][101];
int check[101][101];

int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

typedef pair<int, int> ii;

int main() {
  scanf("%d %d", &N, &M);
  memset(check, -1, sizeof(check));
  for (int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      scanf("%1d", &arr[i][j]);
    }
  }
  queue <ii> q;
  check[0][0] = 1;
  q.push(ii(0, 0));
  while(!q.empty()) {
    int x, y;
    x = q.front().first; y = q.front().second;
    q.pop();
    for(int i = 0; i < 4; i++){
      int xx = x + dir[i][1]; int yy = y + dir[i][0];
      if (xx < 0 || yy < 0 || xx >= N || yy >= M) continue;
      if (arr[xx][yy] == 0 || check[xx][yy] != -1) continue;
      check[xx][yy] = check[x][y] + 1;
      q.push(ii(xx, yy));
    }
  }
  printf("%d\n", check[N-1][M-1]);
}
