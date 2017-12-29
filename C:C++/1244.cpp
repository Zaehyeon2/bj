#include <cstdio>

int swi[102];

int main() {
  int T; scanf("%d", &T);
  int sex, num;
  for (int i = 0; i < T; i++){
    scanf("%d", &swi[i]);
  }
  int T2; scanf("%d", &T2);
  while(T2--){
    scanf("%d %d", &sex, &num);
    if (sex == 1){
      for (int i = 0; i < T; i++){
        if (i % num == num - 1)
          swi[i] = !swi[i];
      }
    }
    else {
      swi[num-1] = !swi[num-1];
      for (int i = 1; ; i++){
        if (num - 1 - i < 0 || num - 1 + i >= T){
          break;
        }
        if (swi[num - 1 - i] == swi[num - 1 + i]){
          swi[num-1-i] = !swi[num-1-i];
          swi[num-1+i] = !swi[num-1+i];
        }
      }
    }
  }
  for ( int i = 0; i < T; i++){
    if (i % 20 == 19) printf("%d\n", swi[i]);
    else printf("%d ", swi[i]);
  }
  printf("\n");
}
