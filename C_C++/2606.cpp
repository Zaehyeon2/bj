#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include "vector"

using namespace std;

int ans = 0, N, M;
vector < vector < int > > mat(101);
bool chk[101];

int bfs(int s){
	chk[s] = true;
	queue <int> q;
	q.push(s);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for (int i = 0; i < mat[x].size(); ++i)
		{
			if (chk[mat[x][i]] == false){
				chk[mat[x][i]] = true;
				ans++;
				q.push(mat[x][i]);
			}
		}
	}

	return ans;
}

int main(int argc, char const *argv[])
{
	cin >> N >> M ;
	for (int i = 0; i < M; ++i)
	{
		int A, B;
		cin >> A >> B;
		mat[A].push_back(B);
		mat[B].push_back(A);
	}
	printf("%d\n", bfs(1));
	return 0;
}