#include <stdio.h>

int main(int argc, char const *argv[]) {
  while (1){
    int A, B;
    scanf("%d %d",&A, &B);
    if (A == 0 & B == 0) {
      break;
    }
    printf("%d\n", A + B);
  }
  return 0;
}
