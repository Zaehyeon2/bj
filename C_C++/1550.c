#include <stdio.h>

int main(){
  int sum = 0, B;
  char A[6] = {};
  scanf("%s", A);
  for (int i = 0; i < 6; i++){
    if ( A[i] == 'A'){
      sum += ((16 * i) + 10);
    }
    else if ( A[i] == 'B'){
      sum += 16 * i + 11;
    }
    else if ( A[i] == 'C'){
      sum += 16 * i + 12;
    }
    else if ( A[i] == 'D'){
      sum += 16 * i + 13;
    }
    else if ( A[i] == 'E'){
      sum += 16 * i + 14;
    }
    else if ( A[i] == 'F'){
      sum += 16 * i + 15;
    }
    else if ( A[i] == '0'){
    }
  }
  printf("%d\n", sum);
}
