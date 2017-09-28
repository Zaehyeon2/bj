#include <stdio.h>

int main(int argc, char const *argv[]) {
  int U, D, H, sum = 0;
  scanf("%d %d %d", &U, &D, &H);
  while (H > 0) {
    sum += 1;
    H -= U;
    if ( H > 0 ){
      H += D;
    }
  }
  printf("%d\n", sum);
  return 0;
}
