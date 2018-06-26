#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int stair[301];
int chk[301][2];
int N;

int dp(int n, int s){
  if ( n == N) return 0;
  int& ret = chk[n][s];
  if (ret != -1) return ret;
  ret = dp(n + 1, 0);
  if ( s < 2) ret = max(max(dp(n + 1, s + 1) + stair[n], ret), dp(n + 2, s + 1) + stair[n]);
  return ret;
}

int main() {
  memset(chk,-1,sizeof(chk));
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &stair[i]);
  }
  printf("%d\n", dp(0, 0));
}
