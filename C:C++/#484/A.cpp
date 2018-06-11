#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int seat[1003];

int main() {
  int N; scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    scanf("%1d", &seat[i]);
  }
  for(int i = 1; i <= N; i++){
    if(seat[i] == 1){
      if(seat[i-1] == 1 || seat[i+1] == 1) {
        printf("%s\n", "No");
        return 0;
      }
    }
    else {
      if (seat[i-1] == 0 && seat[i+1] == 0) {
        printf("%s\n", "No");
        return 0;
      }
    }
  }
  printf("%s\n", "Yes");
}
