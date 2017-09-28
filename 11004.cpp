#include <stdio.h>

double arr[5000001] = {};

int main(int argc, char const *argv[]) {
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) {
        double inp;
        scanf("%lf", &inp);
        arr[i] = inp;
    }

    return 0;
}
