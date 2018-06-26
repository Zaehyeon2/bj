#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main() {
  int N; scanf("%d", &N);
  while ( N -- ) {
    string A;
    double inp;
    scanf("%lf\n", &inp);
    getline(cin, A);
    for (int i = 0; i < A.size(); i++) {
      if ( A[i] == '@') {
        inp *= 3;
      }
      if ( A[i] == '#') {
        inp -= 7;
      }
      if ( A[i] == '%') {
        inp += 5;
      }
    }
    printf("%.2f\n", inp);
  }
}
