#include <cstdio>
#include "algorithm"
#include <string>
#include <iostream>

using namespace std;

bool chk(int H, int M){
  if(H % 10 == 7 || M % 10 == 7) return true;
  return false;
}

int main() {
  int A; scanf("%d", &A);
  int H, M; scanf("%d %d", &H, &M);
  int cnt = 0;
  while(1){
    if (chk(H, M)){
      printf("%d\n", cnt);
      break;
    }
    M -= A;
    if (M < 0) {
      H--;
      M = 60 + M;
    }
    if (H < 0) {
      H = 23;
    }
    cnt++;
  }
}
