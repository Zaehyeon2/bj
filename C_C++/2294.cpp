#include "cstdio"
#include "cstring"
#include <algorithm>
#define INF 987654321

using namespace std;

int coin[101],cache[101][10001], N, K;

int dp(int s, int k) {
    if (k == K) return 0;
    if (s == N) return INF;
    int& ret = cache[s][k];
    if (ret != -1) return ret;
    ret = INF;
    for (int i = k; i <= K; i += coin[s])
        ret = min(ret, dp(s + 1, i) + (i - k) / coin[s]);
    return ret;
}


int main() {

    memset(cache, -1, sizeof(cache));

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++)
        scanf("%d", &coin[i]);

    if (dp(0, 0) >= INF) printf("-1\n");
    else printf("%d\n", dp(0, 0));

}
