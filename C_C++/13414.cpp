#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#define mp(x, y) make_pair(x, y)

using namespace std;

map<int, int> m;
vector <pair<int, int> > v;

int main(){
	int N, K; scanf("%d%d", &N, &K);
	for(int i = 0; i < K; i++){
		int tmp; scanf("%d", &tmp);
		m[tmp] = i;
	}
	for (auto i = m.begin(); i != m.end(); ++i)
	{
		v.push_back(mp(i->second, i->first));
		// printf("%d %d\n", i->first, i->second);
	}
	sort(v.begin(), v.end());
	if(N > v.size()) N = v.size();
	for (int i = 0; i < N; ++i)
	{
		printf("%08d\n", v[i].second);
	}
}