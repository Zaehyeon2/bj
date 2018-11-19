#include <cstdio>
#include <vector>

using namespace std;

vector <vector<int> > v(200001);
vector <vector<int> > r(200001);
int color[200001];
int sum;

void find(int parent, int node) {
    int len = v[node].size();
    for(int i = 0; i < len; i++) {
        if(v[node][i] != parent) {
            r[node].push_back(v[node][i]);
            find(node, v[node][i]);
        }
    }
}

void sumcolor(int node, int c){
    if(color[node] <= c) sum++;
    sum %= 1000000007;
    int len = r[node].size();
    for (int i = 0; i < len; ++i)
    {
        sumcolor(r[node][i], c);
    }
}

int main() {
    int n, M ,C; scanf("%d%d%d", &n, &M, &C);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &color[i]);
    }
    for(int i = 0; i < n-1; i++) {
        int a, b; scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    find(0, 1);
    for (int i = 0; i < M; ++i)
    {
        int v, c; scanf("%d%d", &v, &c);
        sumcolor(v, c);
    }
    printf("%d\n", sum % 1000000007);
}