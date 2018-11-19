#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct {
  int gold;
  int silver;
  int bronze;
  int num;
  int rank;
} medal;

int medalcmp(medal a, medal b) {
 if(a.gold == b.gold) {
  if(a.silver == b.silver) {
   return a.bronze > b.bronze;
  }
  return a.silver > b.silver;
 }
 return a.gold > b.gold;
}

medal M[1001];

int main() {
  int N, K; scanf("%d %d", &N, &K);
  for (int i = 0; i < N; i++){
    int n, g, s, b; scanf("%d %d %d %d", &M[i].num, &M[i].gold, &M[i].silver, &M[i].bronze);
  }
  sort(M, M + N, medalcmp);
  for (int i = 0; i < N; i++){
    M[i].rank = i + 1;
  }
  for (int i = 0; i < N - 1; i++){
    if (M[i].gold == M[i+1].gold && M[i].silver == M[i+1].silver && M[i].bronze == M[i+1].bronze) {
      M[i+1].rank = M[i].rank;
    }
  }
  for (int i = 0; i < N; i++){
    if (M[i].num == K){
      printf("%d\n", M[i].rank);
    }
  }
}
