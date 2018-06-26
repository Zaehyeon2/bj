#include <cstdio>
#include <deque>

using namespace std;

deque <int> dq;

int main() {
	int sum = 0;
	int N, K; scanf("%d%d", &N, &K);
	for (int i = 1; i <= N; ++i)
	{
		int tmp;
		scanf("%d", &tmp);
		dq.push_back(tmp);
	}
	while(!dq.empty()){
		if(dq.front() <= K) {
			sum++;
			dq.pop_front();
		}
		else break;
	}
	while(!dq.empty()){
		if(dq.back() <= K) {
			sum++;
			dq.pop_back();
		}
		else break;
	}
	printf("%d\n", sum);
}