#include <bits/stdc++.h>
#define mp(x, y, z) make_pair(make_pair(x, y), z)

using namespace std;

int box[101][101][101];
int N, M, H;

queue <pair<pair<int, int>, int> > q;

int dir[6][3] = {{0,0,1},{0,0,-1},{1,0,0},{-1,0,0},{0,1,0},{0,-1,0}};

void bfs(){
    while(!q.empty()){
        int fy = q.front().first.first, fx = q.front().first.second, fz = q.front().second;
        q.pop();
        for(int i = 0; i < 6; i++){
            int yy = fy + dir[i][0], xx = fx + dir[i][1], zz = fz + dir[i][2];
            if(yy < 0 || xx < 0 || zz < 0 || yy >= H || xx >= M || zz >= M) continue;
            if(box[yy][xx][zz] == 0){
                box[yy][xx][zz] = box[fy][fx][fz]+1;
                q.push(mp(yy, xx, zz));
            }
        }
    }
}

int main(){
    bool tam = false;
    cin >> M >> N >> H;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                cin >> box[i][j][k];
                if(box[i][j][k] == 0) tam = true;
                if(box[i][j][k] == 1) q.push(mp(i, j, k));
            }
        }
    }
    if(!tam) {
        printf("0\n");
        return 0;
    }
    int ans = 0;
    bfs();
    tam = false;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                // printf("%d ", box[i][j][k]);
                if(box[i][j][k] == 0) tam = true;
                else ans = max(ans, box[i][j][k]);
            }
            // printf("\n");
        }
        
    }
    if(tam) printf("-1\n");
    else printf("%d\n", ans-1);
}