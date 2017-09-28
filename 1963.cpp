#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int prime[10001];
int chk[10001];

void primeseting() {
	for(int i = 2; i < 100; i++){
		if (prime[i] == 0){
			for (int j =i*i; j < 10000; j += i)
			{
				prime[j] = 1;
			}
		}
	}
}

int main() {
	int N;
	while(N--){
		int Start, End;
		scanf("%d %d", &Start, &End);
	}
	return 0;
}
