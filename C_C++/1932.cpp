#include <cstdio>
#include <algorithm>

using namespace std;

int arr[501][501];

int main(){
  int n; scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j ++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 1; i < n; i++){
    for(int j = 0; j <= i; j ++){

    }
  }
}
