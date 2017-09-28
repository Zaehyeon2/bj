#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[1001] = {};
  int N;
  scanf("%d", &N);
  for (size_t i = 0; i < N; i++) {
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N-1; j++) {
      if (arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (size_t i = 0; i < N; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
