#include <cstdio>

int foo(int n){
  if (n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 4;
  return foo(n-1) + foo(n-2) + foo(n-3);
}

int main(){
  int T; scanf("%d", &T);
  while(T--){
    int n; scanf("%d", &n);
    printf("%d\n", foo(n));
  }
}
