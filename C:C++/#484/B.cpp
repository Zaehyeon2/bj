#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector <pair<int, int> > row;
priority_queue <int> q;
char seat[2000001];

int main() {
  int N; scanf("%d", &N);
  for(int i = 0; i < N; i++){
    int tmp; scanf("%d", &tmp);
    row.push_back(make_pair(tmp, i + 1));
  }
  sort(row.begin(), row.end());
  int tmp;
  int j = 0, k;
  for(int i = 0; i < 2*N; i++){
    scanf("%1d", &tmp);
    if(tmp == 0){
      seat[j]++;
      printf("%d ", row[j].second);
      q.push(j++);
    }
    else {
      k = q.top();
      q.pop();
      seat[k]++;
      printf("%d ", row[k--].second);
    }
  }
}
