#include <cstdio>
#include <queue>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

char inp[201][201];
bool chk[201][201];
string ans;

int sum;

vector <string> v;

int dir[8][2] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1},
					{0, 1}, {0, -1}, {1, 0}, {-1, 0}}; 

int H, W, L;

void bfs(int y, int x) {
	queue <pair<pair<int, int>, string> > q;
	string tmp = "";
	q.push(make_pair(make_pair(y, x), tmp + inp[y][x]));
	while(!q.empty()){
		for(int i = 0; i < 8; i++){
			int yy = q.front().first.first + dir[i][0]; int xx = q.front().first.second + dir[i][1];
			if(yy < 0 || yy >= H || xx < 0 || xx >= W || chk[yy][xx] == 1) continue;
			chk[yy][xx] = 1;
			q.push(make_pair(make_pair(yy, xx), q.front().second + inp[yy][xx]));
		}
		cout << q.front().second + '\n';
		q.pop();
	}
}

int main(){
	scanf("%d%d%d", &H, &W, &L);

	for(int i = 0; i < H; i++){
		scanf("%s", inp[i]);
	}

	cin >> ans;

	for(int i = 0; i < H; i++){
		for(int j = 0; j < W; j++){
			string tmp = "";
			tmp += inp[i][j];
			chk[i][j] = 1;
			bfs(i, j);
			memset(chk, 0 ,sizeof(chk));
		}
	}

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << '\n';
	}
	printf("%d\n", sum);
}