#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int N, d[501], X, cache[501][501];

int dp(int a, int b){
  if ( a == b) return 0;
  int& ret = cache[a][b];
  if (ret != -1) return ret;
  ret = (1LL << 31) - 1;
  for ( int k = a; k <= b - 1; k++){
    ret = min(ret, dp(a, k) + dp(k + 1, b) + d[a - 1] * d[k] * d[b]);
  }
  return ret;
}

int main(){
  memset(cache, -1, sizeof(cache));
  scanf("%d", &N);
  scanf("%d %d", &d[0], &d[1]);
  for ( int i = 1; i < N; i ++){
    scanf("%d %d", &X, &d[i + 1]);
  }
  printf("%d\n", dp(1, N));
  return 0;
}
