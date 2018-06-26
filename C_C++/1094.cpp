#include <cstdio>

int main(){
  int N; scanf("%d", &N);
  int cnt = 0;
  while(1){
    if(N == 1 || N == 2 || N == 4 || N == 8 || N == 16 || N == 32 || N == 64) {
      cnt++; break;
    }
    else {
      if(N > 32) N -= 32;
      else if (N > 16) N -= 16;
      else if (N > 8) N -= 8;
      else if (N > 4) N -= 4;
      else if (N > 2) N -= 2;
      else N -= 1;
    }
    cnt++;
  }
  printf("%d\n", cnt);
}
