#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v2;
vector <int> v1;
vector <int> ans;

int main(){
  int A, B; scanf("%d%d", &A, &B);
  for(int i = 0; i < A; i++){
    int tmp; scanf("%d", &tmp);
    v1.push_back(tmp);
  }
  sort(v1.begin(), v1.end());
  for(int i = 0; i < B; i++){
    int tmp; scanf("%d", &tmp);
    v2.push_back(tmp);
  }
  sort(v2.begin(), v2.end());
  int i = 0, j = 0;
  while(1) {
    if(i >= A || j >= B) break;
    if(v1[i] > v2[j]) {
      j++;
    }
    else if (v1[i] == v2[j]){
      i++; j++;
    }
    else {
      ans.push_back(v1[i]); i++;
    }
  }
  int ss = ans.size();
  printf("%d\n", ss);
  for(int i = 0; i < ss; i++){
    printf("%d ", ans[i]);
  }
}
