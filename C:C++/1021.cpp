#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

queue <int> q;

int arr[51], ans, leftn, rightn;
int cnt;

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (M--) {
        while(1){
            if (q.front() == arr[cnt]) {
                q.pop();
                break;
            }
            q.push(q.front());
            q.pop();
            leftn++;
        }
        rightn = q.size() - leftn + 1;
        if (leftn <= rightn) {
            ans += leftn;
        }
        else {
            ans += rightn;
        }
        leftn = 0;
        cnt++;
    }
    printf("%d\n", ans);
    return 0;
}
