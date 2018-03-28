#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

char cell[501][501];
int R, C, dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int chk(int y, int x){
  for (int i = 0; i < 4; i++){
    int yy = y + dir[i][0], xx = x + dir[i][1];
    if (yy < 0 || yy >= R || xx < 0 || xx >= C) continue;
    if (cell[yy][xx] == 'S') {
      return 0;
    }
  }
  return 1;
}

void DOG(int y, int x){
  for (int i = 0; i < 4; i++){
    int yy = y + dir[i][0], xx = x + dir[i][1];
    if (yy < 0 || yy >= R || xx < 0 || xx >= C) continue;
    if (cell[yy][xx] != 'S'){
      cell[yy][xx] = 'D';
    }
  }
}

int main() {
  scanf("%d %d\n", &R, &C);
  for (int i = 0; i < R; i++){
    cin >> cell[i];
  }
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      if (cell[i][j] == 'W' && chk(i, j) == 0){
        printf("%s\n", "No");
        return 0;
      }
    }
  }
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      if (cell[i][j] == 'S'){
        DOG(i, j);
      }
    }
  }
  printf("%s\n", "Yes");
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      printf("%c",cell[i][j]);
    }
    printf("\n");
  }
}
