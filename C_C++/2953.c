#include <stdio.h>

int main(){
  int Number = 1;
  int Win_S = 0;
  int Win_N, sum;
  int s[4];
  for (int count = 0; count < 5; count ++){
    for(int roop = 0;roop < 4;roop++){
      scanf("%d",&s[roop]);
      sum += s[roop];
        if (Win_S < sum){
          Win_S = sum;
          Win_N = count + 1;
        }
    }
    sum = 0;
  }
  printf("%d %d", Win_N, Win_S);
}
