#include <stdio.h>
int main(){
  int A, B;
  char operator1;
  scanf("%d %c %d", &A, &operator1, &B);
  printf("%d %c %d\n", A,operator1,B);
  if(operator1 == '+'){
    printf("%d\n", A+B);
  }
  else{
    printf("%d\n", A*B);
  }
}
