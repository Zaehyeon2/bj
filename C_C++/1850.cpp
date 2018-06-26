#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main() {
  long long A, B; scanf("%lld %lld", &A, &B);
  long long Max = max(A, B);
  long long Min = min(A, B);
  B = Max;
  A = Min;
  if ( B % A == 0){
    string ans = "";
    int gcd = min(A, B);
    for (int i = 0; i < gcd; i++) {
      ans += '1';
    }
    printf("%s\n", ans.c_str());
  }
  else {
    printf("1\n");
  }
}
