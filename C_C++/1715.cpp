#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
int ans;

priority_queue <int, vector <int> ,greater <int> > pq;

int main()
{
	int N;
	cin >> N;
	while (N--){
		int X;
		cin >> X;
		pq.push(X);
	}
	while (pq.size() > 1){
		int A = pq.top();
		pq.pop();
		pq.push(A + pq.top());
		ans += A + pq.top();
		pq.pop();
	}
	printf("%d\n", ans);
	return 0;
}