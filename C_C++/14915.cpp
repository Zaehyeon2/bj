#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
  int m, n; scanf("%d %d", &m, &n);
  string ans = "";
  if (m == 0){
    printf("0");
  }
  else {
    while(m){
      int tmp = m % n;
      if (tmp >= 10) {
        ans = char('A' + tmp - 10) + ans;
      }
      else {
        ans = char('0' + tmp) + ans;
      }
      m /= n;
    }
  }
  cout << ans << '\n';
}
