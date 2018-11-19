#include <stdio.h>
#include <string.h>

int s = 1, t = 2, e = 3;
char sum = [];

void hanoi(int n,int s,int e,int t){
  if ( n == 0) {
    return;
  }
  hanoi(n-1,s,t,e);
  printf("%d %d\n",s,e);
  hanoi(n-1,t,e,s);
}
int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    sum = [2^n];
  }
  long double S = strlen(sum);
  printf("%c\n", sum);
  if (n <= 20){
    hanoi(n,s,e,t);
  }
  return 0;
}
