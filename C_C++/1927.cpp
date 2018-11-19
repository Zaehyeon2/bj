#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

priority_queue <int, vector <int> ,greater <int> > pq;
int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	while (N--){
		int X;
		cin >> X;
		if (X == 0){
			if (pq.empty()){
				printf("0\n");
			}
			else{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else{
			pq.push(X);
		}
	}
	return 0;
}