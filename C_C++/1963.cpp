#include <cstdio>
#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>

using namespace std;

int prime[10001];
int chk[10001];

void primeseting() {
	for(int i = 2; i < 100; i++){
		if (prime[i] == 0){
			for (int j = i * i; j < 10000; j += i) {
				prime[j] = 1;
			}
		}
	}
}

int solve(int s, int e){
	memset(chk, -1, sizeof(chk));
	queue <int> q;
	chk[s] = 0;
	q.push(s);
	while(!q.empty()){

	}

}

int main() {
	int N; scanf("%d", &N);
	while(N--){
		int S, E;
		scanf("%d %d", &S, &E);
	}
	return 0;
}
