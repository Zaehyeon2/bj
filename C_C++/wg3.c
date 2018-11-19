#include <stdio.h>

struct stat {
  int ATK;
  int HP;
};

int main(){
  struct stat war;
  struct stat mush;
  int N = 3;
  scanf("%d %d %d %d", &war.ATK, &war.HP, &mush.ATK, &mush.HP);
  while (N--){
    mush.HP -= war.ATK;
    if (mush.HP <= 0){
      printf("전사 승\n");
      return 0;
    }
    war.HP -= mush.ATK;
    if (war.HP <= 0){
      printf("버섯 승\n");
      return 0;
    }
  }
  printf("무승부\n");
}
