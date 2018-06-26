#include <stdio.h>

int main(){
  int A_s,B_s ;
  int A = 0;
  int B = 0;
  for (int i = 0; i < 10;i++){
    scanf("%d", &A_s);
    A += A_s;
  }
  for (int i = 0; i < 10;i++){
    scanf("%d", &B_s);
    B += B_s;
  }
  printf("%d %d", A, B);
}
