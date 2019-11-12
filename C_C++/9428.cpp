#include <bits/stdc++.h>

using namespace std;

vector <pair<string, int> > seq;
vector <int> ans;

int pfix(string &a, string &b){
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return cnt;
        else cnt++;
    }
    return cnt;
}

string substring(string &a){
    
}

typedef pair<string, int> si;

int cnt;
int main(){
    string inp; cin >> inp;
    for(int i = 0; i < inp.size(); i++){
        seq.push_back(si(inp.substr(i, inp.size()-i), i+1));
        
    }
    sort(seq.begin(), seq.end());
    for(int i = 0; i < seq.size()-1; i++){
        ans.push_back(pfix(seq[i].first, seq[i+1].first));
    }
    for(int i = 0; i < seq.size(); i++){
        printf("%d ", seq[i].second);
    }
    printf("\nx ");
    for(int i = 0; i < ans.size(); i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
}