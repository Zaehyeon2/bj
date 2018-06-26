#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int mat[101][101];
int N, M, ans1;
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int x1, y1, x2, y2;
vector <int> v;

int bfs(int sy, int sx){
	int ret = 0;
	queue < pair <int, int> > q;
	q.push(make_pair(sy,sx));
	mat[sy][sx] = 1;
	ret ++;
	while (!q.empty()){
		int y = q.front().first, x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++){
			int yy = y+ dir[i][0], xx = x + dir[i][1];
			if (yy < 0 || yy >= M || xx < 0 || xx >= N) continue;
			if (mat[yy][xx] == 0){
				q.push(make_pair(yy,xx));
				mat[yy][xx] = 1;
				ret ++;
			}
		}

	}
	return ret;

}

int main(int argc, char const *argv[])
{	
	int K;
	scanf("%d %d %d",&M, &N, &K);
	while(K--){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i = y1; i < y2;i++){
			for(int j = x1; j < x2; j++){
				mat[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < M;i++){
		for(int j = 0; j < N; j++){
			if (mat[i][j] == 0){
				ans1++;
				v.push_back(bfs(i,j));
			}
		}
	}
	sort(v.begin(),v.end());
	printf("%d\n", ans1);
	for (int i = 0; i < v.size(); ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}