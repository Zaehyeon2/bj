#include "cstdio"
#include <algorithm>

using namespace std;

int sum = 0;

int main() {
  int arr[9];
  for (int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  sort(arr, arr + 9);
  for (size_t i = 0; i < 9; i++) {
    int tmp = sum;
    for (size_t j = i + 1; j < 9; j++) {
      if (tmp - arr[i] - arr[j] == 100) {
        for (int k = 0; k < 9; k++){
          if ( k != i && k != j){
            printf("%d\n", arr[k]);
          }
        }
      }
    }
  }
}
