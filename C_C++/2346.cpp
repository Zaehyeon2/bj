#include <cstdio>

int arr[2002];
int cnt = 0;


int main(){
  int T; scanf("%d", &T);
  int fst; scanf("%d", fst);
  arr[fst] = 1;
  for (int i = 2; i <= T; i ++){
    int x; scanf("%d", &x);
    arr[x] = i;
  }
  printf("%d", arr[fst]);
  for (int i = 1; i < T; i++) {
    while(1){

    }
  }
}
