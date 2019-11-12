#include <bits/stdc++.h>

using namespace std;

int parent[100001];
int chk[100001];

vector <vector <int> > v(100001);

void dfs(int chi){
    chk[chi] = 1;
    for(int i = 0; i < v[chi].size(); i++){
        if(chk[v[chi][i]] == 0){
            parent[v[chi][i]] = chi;
            dfs(v[chi][i]);
        }
    }
}

int main(){
    int N; cin >> N;
    for(int i = 0; i < N-1; i++){
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    dfs(1);
    for(int i = 2; i <= N; i++){
        printf("%d\n", parent[i]);
    }
}