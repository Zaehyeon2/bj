#include <cstdio>
#include <cmath>

int N, mat[35000][35000], r, c, cnt = 0;

void foo(int y, int x, int n) {
  if (chk(y, x, n) == true) {
    mat[y][x] = cnt++;
    return;
  }
  foo(y, x, n / 2);
  foo(y, x + n / 2, n / 2);
  foo(y + n / 2, x, n / 2);
  foo(y + n / 2, x + n / 2, n / 2);
}

int main(){
  int mem = 0;
  scanf("%d %d %d", &N, &r, &c);
  int N2 = pow(2,N);
  for (int i = 0; i < N2; i++) {
    for (int j = 0; j < N2; j++) {
      mat[i][j] = mem++;
    }
  }
  foo(0, 0, N2);
  for (int i = 0; i < N2; i++) {
    for (int j = 0; j < N2; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("%d\n", mat[r][c]);
}
