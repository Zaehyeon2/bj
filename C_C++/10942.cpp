#include <cstdio>
#include <cstring>

int S, E;
int arr[2001], cache[2001][2001];

int dp(int s, int e){
    int& ret = cache[s][e];
    if (s >= e) return ret = 1;
    if (ret != -1) return ret;
    return ret = (arr[e] == arr[s] && dp(s+1, e-1));
}

int main(void){
    memset(cache, -1, sizeof(cache));
    int N; scanf("%d", &N);

    for ( int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int M; scanf("%d", &M);

    while(M--){
        scanf("%d %d", &S, &E);
        printf("%d\n", dp(S-1,E-1));
    }
}
