#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main(){
  int N, K, D;
  scanf("%d %d %d",&N, &K, &D);
  while(K--){
    int s, f, r;
    scanf("%d %d %d",&s,&f,&r);
    v.push_back(s);
    while(s+r<=f){
      s = s+r;
      v.push_back(s);
    }
  }
  sort(v.begin(),v.end());
  printf("%d\n",v[D-1]);
}
