#include <cstdio>

int N, M, tree[1000001];

bool decision(int mid) {
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    if (tree[i] > mid)
      sum += tree[i] - mid;
  }
  return sum >= M;
}

int main() {
  scanf("%d %d", &N, &M);
  for (int i = 0; i < N; i++)
    scanf("%d", &tree[i]);
  int lo = 0, hi = 2000000001;
  while ( lo + 1 < hi ) {
    int mid = (lo + hi) / 2;
    if(decision(mid)){
      lo = mid;
    }
    else {
      hi = mid;
    }
  }
  printf("%d\n", lo);
}
