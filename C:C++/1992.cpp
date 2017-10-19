#include <cstdio>

int N, mat[65][65];


bool chk(int y, int x, int n) {
    int first = mat[y][x];
    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (first != mat[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void dq(int y, int x, int n) {
    if (chk(y, x, n) == true) {
        printf("%d", mat[y][x]);
        return;
    }
    printf("(");
    dq(y, x, n / 2);
    dq(y, x + n / 2, n / 2);
    dq(y + n / 2, x, n / 2);
    dq(y + n / 2, x + n / 2, n / 2);
    printf(")");
}

int main(){
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1d", &mat[i][j]);
        }
    }
    dq(0,0,N);
    printf("\n");
}
