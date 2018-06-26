#include <cstdio>

using namespace std;
int arr[10];

int main() {
  int N; scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    int tmp = i;
    while(tmp > 0){
      arr[tmp%10]++;
      tmp /= 10;
    }
  }
  for (int i = 0; i <= 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
