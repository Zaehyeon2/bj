#include <cstdio>

int main() {
  int X; scanf("%d", &X);
  int i = 1, j = 0;
  while(1){
    if (i >= X){
      break;
    }
    X -= i;
    i++;
    j++;
  }
  if (j % 2 == 1) printf("%d/%d\n", X, i + 1 - X);
  else printf("%d/%d\n", i + 1 - X, X);
}
