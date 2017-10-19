#include <queue>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int imp[101] = {};

int main() {
    int T; cin >> T;
    while (T--) {
        queue <pair <int, int> > q;
        int N, M, cnt = 1;
        cin >> N >> M;
        for (int i = 0; i < N; i ++) {
            int inp; cin >> inp;
            imp[i] = inp;
            q.push(make_pair(i, inp));
        }
        sort(imp, imp+N);
        while(1) {
            if (imp[N - cnt] == q.front().second){
                if (M != q.front().first) {
                    q.pop();
                    cnt++;
                }
                else {
                    printf("%d\n",cnt);
                    break;
                }
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}
