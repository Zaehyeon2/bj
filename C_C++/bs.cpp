#include <cstdio>

int main() {
  int N = 10;
  int arr[10] = {1, 3, 6, 8, 11, 15, 17, 23, 30, 55};
  int k = 8;
  int left = 0, right = 9;
  while(left <= right){
    int mid = (left + right) / 2;
    if (arr[mid] == k){
      printf("Find %d in %d\n", k, mid);
      break;
    }
    if (arr[mid] > k) {
      right = mid - 1;
    }
    if (arr[mid] < k) {
      left = mid + 1;
    }
  }
}
