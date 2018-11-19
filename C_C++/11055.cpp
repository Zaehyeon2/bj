#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

int arr[1002], Max;
int lis[1002];

int main() {

  int N; scanf("%d", &N);

  for ( int i = 1; i <= N; i++) {
    lis[i] = 1;
  }

  for(int i = 0; i < N; i++){
    scanf("%d", &arr[i]);
  }

  lis[1] = 1;

  for ( int i = 1; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j]){
        lis[i+1] = max(lis[i+1], lis[j+1] + 1);
      }
      Max = max(Max, lis[i+1]);
    }
  }
  printf("%d\n", Max);
}
