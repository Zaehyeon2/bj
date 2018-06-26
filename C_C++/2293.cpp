#include "cstdio"
#include "cstring"
#include <algorithm>
#define INF 987654321

using namespace std;

int coin[101],cache[10001], N, K;

int main() {

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++)
        scanf("%d", &coin[i]);
    for ( int i = 0; i <= K; i++)
        if ( i %coin[0] == 0)
            cache[i] = i / coin[0];
    for ( int i = 1; i < N; i ++){
        for (int j = coin[i]; j <= K ; j++) {
            cache[j] = min(cache[j], cache[j - coin[j]] + 1 );
        }
    }
    if (cache[K] == -1) printf("-1\n");
    else printf("%d\n", cache[K]);
}
