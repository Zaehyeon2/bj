#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

vector < pair <int, int> > v;

int main() {
  int f, b, n, Min = 1000000000;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &f, &b);
    v.push_back(make_pair(f, b));
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 1; i++){
    Min = min(Min, (v[i].first - v[i+1].first) * (v[i].first - v[i+1].first)  + (v[i].second - v[i+1].second) * (v[i].second - v[i+1].second));
  }
  printf("%d\n", Min);
}
