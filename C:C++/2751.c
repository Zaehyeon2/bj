#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[2000000] = {};
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int S;
    scanf("%d", &S);
    if (S >= 0){
      arr[S + 1000000] = 1;
    }
    else {
      arr[1000000+S] = 1;
    }
  }
  for (int i = 0; i < 2000001; i++) {
    if (i < 1000000) {
      if (arr[i] == 1){
        printf("%d\n", (1000000 - i)*-1);
      }
    }
    else{
      if (arr[i] == 1){
        printf("%d\n", i - 1000000);
      }
    }
  }
  return 0;
}
