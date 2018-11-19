#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector <int> v;
int chk[5001];


int main() {
  int N; scanf("%d", &N);
  int cnt = 0;
  for (int i = 0; i < N; i++){
    int tmp; scanf("%d", &tmp);
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < N; i++) {
    if (chk[i] == 0) {
      int tmpidx = i;
      chk[i] = 1;
      for (int j = i + 1; j < N; j++){
        if (chk[j] == 0 && v[tmpidx] < v[j]) {
          tmpidx = j;
          chk[j] = 1;
        }
      }
      cnt++;
    }
  }
  printf("%d\n", cnt);
}
