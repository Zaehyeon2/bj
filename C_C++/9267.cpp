#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;
ll A, B, C, Max, Min;

int main(){
  scanf("%lld%lld%lld", &A, &B, &C);
  // printf("%lld\n", A);
  Max = max(A, B);
  Min = min(A, B);
  if (A != 0 && B != 0 && C == 0){
    printf("%s\n", "NO");
    return 0;
  }
  while(1){
    if (C < 0){
      break;
    }
    if(C % Min == 0) {
      printf("%s\n", "YES");
      return 0;
    }
    C -= Max;
  }
  printf("%s\n", "NO");
}
