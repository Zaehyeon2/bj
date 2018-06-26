#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

vector <int> v;
vector <int> bus;


int main() {
	int T; scanf("%d",&T);
	for (int i = 1; i <= T; ++i) {
		int N, K; scanf("%d%d", &N, &K);
		for(int j = 0; j < N; j++){
			int tmp; scanf("%d", &tmp);
			v.push_back(tmp);
		}
		bus.push_back(v[0]);
		for(int j = 1; j < N; j++){
			int ss = bus.size();
			int bl = 0;
			for(int k = 0; k < ss; k++){
				if(abs(v[j] - bus[k]) <= K) {
					continue;
				}
				else {
					bl = 1;
					bus[k] = v[j];
					break;
				}
			}
			if (!bl) {
				bus.push_back(v[j]);
			}
		}
		printf("Case #%d\n%lu\n", i, bus.size());
		v.clear();
		bus.clear();
	}
}