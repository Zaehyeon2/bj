#include <cstdio>
#include <cmath>

int N, mat[35000][35000], r, c;


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
    dq(y, x, n / 2);
    dq(y, x + n / 2, n / 2);
    dq(y + n / 2, x, n / 2);
    dq(y + n / 2, x + n / 2, n / 2);
}

int main(){
    int mem = 0;
    bool bo = 0;
    scanf("%d %d %d", &N, &r, &c);
    for (int i = 0; i < pow(2,N); i++) {
        for (int j = 0; j < pow(2,N); j++) {
            mat[i][j] = mem;
            mem++;
        }
    }
    dq(0,0,pow(2,N));
}
