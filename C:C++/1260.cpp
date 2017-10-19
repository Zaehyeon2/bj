#include <vector>
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int N, M, V;

int arr[1001][1001];
bool path[1001];
bool path2[1001];

void dfs(int s){
	path[s] = true;
	printf("%d ", s);
	for ( int i = 1; i <= N ; i++){
		if (arr[s][i] == 1 && path[i] == false){
			dfs(i);
		}
	}

}

void bfs(int s){
	queue <int> q;
	q.push(s);
	path2[s] = true;
	while (!q.empty()){
		int fr = q.front();
		printf("%d ", fr);
		q.pop();
		for (int i = 1; i <= N; i++){
			if (path2[i] == false && arr[fr][i] == 1){
				q.push(i);
				path2[i] = true;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> N >> M >> V;
	while (M--){
		int A, B;
		cin >> A >> B;
		arr[A][B] = 1;
		arr[B][A] = 1;

	}
	dfs(V);
	printf("\n");
	bfs(V);
	return 0;
}