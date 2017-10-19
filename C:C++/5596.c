#include <stdio.h>

int main(){
  int score;
  int A = 0;
  int B = 0;
  for (int i = 0; i < 4; i ++){
    scanf("%d", &score);
    A += score;
  }
  score = 0;
  for (int i = 0; i < 4; i ++){
    scanf("%d", &score);
    B += score;
  }
  if (A < B){
    printf("%d", B);
  }
  else if (A > B){
    printf("%d", A);
  }
  else if (A == B){
    printf("S");
  }
}
