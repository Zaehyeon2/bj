#include <cstdio>

int arr[1000001];
int N;

void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void qsort(int arr[], int left, int right){
  int i = left, j = right;
  int pivot = arr[(i + j) / 2];
  while ( i < j) {
    while (arr[i] < pivot) i++;
    while (pivot < arr[j]) j--;
    if (i <= j) {
      swap(&arr[i++], &arr[j--]);
    }
  }
  if (left < j ) {
    qsort(arr, left, j);
  }
  if (right > i) {
    qsort(arr, i, right);
  }
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%d", &arr[i]);
  }
  qsort(arr, 0, N - 1);
  for (int i = 0; i < N; i++) {
    printf("%d\n", arr[i]);
  }
}
