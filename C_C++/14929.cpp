#include <cstdio>

int arr[100001];
double ans = 0;

int main() {
  int n; scanf("%d", &n);
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      ans += arr[i]*arr[j];
    }
  }
  printf("%1.lf\n", ans);
}
