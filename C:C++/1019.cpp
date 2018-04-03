#include <cstdio>
#include <string>

using namespace std;
int arr[300];

int main() {
  int N; scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    string s = to_string(i);
    int size = s.size();
    for(int j = 0; j < size; j++){
      arr[s[j]]++;
    }
  }
  for (int i = '0'; i <= '9'; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
