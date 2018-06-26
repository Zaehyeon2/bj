#include <cstdio>

int main(){
  int n; scanf("%d", &n);
  int cnt = 0;
  while(n > 0){
    if (n % 5 == 0) {
      n -= 5;
    }
    else {
      n-= 2;
    }
    cnt++;
  }
  printf("%d\n", cnt);
}
