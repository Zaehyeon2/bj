#include <cstdio>
#include <vector>
#include <string.h>
#include <algorithm>
#include <queue>
#define INF 987654321
#define COST second
#define END first

using namespace std;

vector < vector < pair <int, int> > > v(1001);
vector <int> dist;
vector <int> dist2;

int N, M, X;
int S, E, T;

vector <int> dijk(int start){
  vector <int> tmpdis(N+1, INF);
  queue < pair<int, int> > q;
  tmpdis[start] = 0;
  q.push(make_pair(0, start));
  while(!q.empty()){
    int cost = q.front().first; int now = q.front().second;
    q.pop();
    if (tmpdis[now] < cost) continue;
    for(int i = 0; i < v[now].size();i++){
      int end = v[now][i].END;
      int endcost = v[now][i].COST;
      if (tmpdis[end] > cost + endcost){
        tmpdis[end] = min(tmpdis[end], tmpdis[now] + endcost);
        q.push(make_pair(tmpdis[end],end));
      }
    }
  }
  return tmpdis;
}

int main() {
  scanf("%d %d %d", &N, &M, &X);
  for (int i = 0; i < M; i++){
    scanf("%d %d %d", &S, &E, &T);
    v[S].push_back(make_pair(E, T));
  }
  dist = dijk(X);
  for (int i = 0; i < M; i++){
    dist2 = dijk(i);
    dist[i] += dist2[X];
  }
  sort(dist.begin(),dist.end());
  printf("%d\n", dist[N-1]);
}
