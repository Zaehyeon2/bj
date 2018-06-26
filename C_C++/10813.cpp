#include <cstdio>

int main(void){
    int N, M; scanf("%d %d",&N, &M);
    int Ball[101] = {};
    for ( int i = 1; i <= N; i ++){ /* assign Ball's number */
        Ball[i] = i;
    }
    while (M--) {
        int fst, scd; scanf("%d %d", &fst, &scd);
        int tmp = Ball[fst]; /* Change Ball */
        Ball[fst] = Ball[scd];
        Ball[scd] = tmp;
    }
    for ( int i = 1; i <= N; i ++){
        printf("%d ", Ball[i]);
    }
    printf("\n");
}
