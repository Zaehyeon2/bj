#include <bits/stdc++.h>

using namespace std;

vector <vector<int> > tree(200001);
int par[200001];

int main(){
    int N, Q; cin >> N >> Q;
    for(int i = 1; i < N; i++){
        int parent; cin >> parent;
        tree[parent].push_back(i);
        par[i] = parent;
    }
    for(int i = 0; i < Q; i++){
        int x; cin >> x;
        if(x == 0){
            int b; cin >> b;
        }
        if(x == 1){

        }
    }
}