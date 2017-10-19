#include <stdio.h>

int main() {
  int N, human = 0;
  scanf("%d\n", &N);
  while (N != 0) {
    if (N >= 4){
        if (N % 2 == 0){
            N -= 4;
            human++;
        }
        else {
            if (N >= 3){
                N -= 3;
                human++;
            }
            else if (N >= 1){
                N -= 1;
                human++;
            }
            else {
                break;
            }
          }
    }
    else {
       if (N >= 3){
           N -= 3;
           human++;
       }
        else if (N >= 1){
            N -= 1;
            human++;
        }
        else {
            break;
        }
    }
  }
  if (human % 2 == 1){
    printf("SK");
  }
  else {
    printf("CY");
  }
}
