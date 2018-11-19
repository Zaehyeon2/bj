#include <cstdio>

int arr[101][101];
int chk[10000001]; //정수 개수 확인

int main() {
  int boolean = 1;
  int sum = 0;
  int N; scanf("%d", &N);
  int ans = N * (N * N + 1) / 2;
  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++) {
      scanf("%d", &arr[i][j]);
      chk[arr[i][j]]++; // 들어온 정수 개수 확인
    }
  }
  // 행 합 확
  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++) {
      sum += arr[i][j];
    }
    if (sum != ans) boolean = 0;
    sum = 0;
  }
  // 열 합 확인
  for(int i = 0; i < N; i++){
    for (int j = 0; j < N; j++) {
      sum += arr[j][i];
    }
    if (sum != ans) boolean = 0;
    sum = 0;
  }
  // 대각선 1
  for(int i = 0; i < N; i++){
    sum += arr[i][i];
  }
  if (sum != ans) boolean = 0;
  sum = 0;
  // 대각선 2
  for(int i = 0; i < N; i++){
    sum += arr[N - i - 1][N - i - 1];
  }
  if (sum != ans) boolean = 0;
  sum = 0;
  // 중복 정수 확
  for(int i = 1; i <= N*N; i++){
    if(chk[i] != 1) boolean = 0;
  }
  if(boolean == 0) printf("%s\n", "FALSE");
  else printf("%s\n", "TRUE");
}
