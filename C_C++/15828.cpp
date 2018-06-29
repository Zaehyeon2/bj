#include <cstdio>
#include <queue>

using namespace std;

queue <int> q;

int main(){
	int N; scanf("%d",&N);
	while(1){
		int tmp; scanf("%d", &tmp);
		if(tmp == -1) break;
		if(tmp == 0) q.pop();
		else if(q.size() < N) q.push(tmp);
	}
	if(q.empty()) printf("empty");
	while(!q.empty()){
		printf("%d ", q.front());
		q.pop();
	}
	printf("\n");
}