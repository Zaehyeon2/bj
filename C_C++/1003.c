#include <stdio.h>

int A,B,n;

int fibonacci(int n) {
  if (n==0) {
      A += 1;
      return 0;
  } else if (n==1) {
      B += 1;
      return 1;
  } else {
      return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  for (int i = t; i > 0; i--){
    scanf("%d", &n);
    fibonacci(n);
    printf("%d %d\n", A, B);
    A = 0;
    B = 0;
  }

  return 0;
}
