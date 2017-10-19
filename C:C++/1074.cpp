#include <cstdio>
#include <cmath>

int N, mat[35000][35000], r, c;

void dq(int y, int x, int n){
    if (n == 1){
        return;
    }
    dq(y, x, n / 2);
    dq(y, x + n / 2, n / 2);
    dq(y + n / 2, x, n / 2);
    dq(y + n / 2, x + n / 2, n / 2);
}

int main(){
    int mem = 0;
    scanf("%d %d %d", &N, &r, &c);
    N = pow(2,N);
    dq(0,0,N);
}
