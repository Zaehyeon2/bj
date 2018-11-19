#include <cstdio>
#include <queue>

using namespace std;

int chk[100001];

queue<int> q;

void foo(int here, int there) {
    if (0 <= there && there <= 100000 && chk[there] == 0) {
        q.push(there);
        chk[there] = chk[here] + 1;
    }
}

int main(int argc, char const *argv[]) {
    int N, K;
    scanf("%d %d", &N, &K);
    chk[N] = 1;
    q.push(N);
    while (1) {
        int here = q.front();
        q.pop();
        if (here == K) {
            return printf("%d\n",chk[here]-1);
        }
        foo(here,here-1);
        foo(here,here+1);
        foo(here,here*2);
    }
    return 0;
}
