#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector < pair < int, int> > v;

int main() {
  int N, cnt = 0, icnt = 0, tmp = 0;
  scanf("%d", &N);
  for (int i = 0; i < N; i ++){
    int s, e; scanf("%d %d", &s, &e);
    v.push_back(make_pair(e, s));
  }
  sort(v.begin(), v.end());

  printf("%d\n", cnt + 1);
}
