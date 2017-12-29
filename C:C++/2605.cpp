#include <cstdio>
#include <stack>

using namespace std;

stack <int> s1;
stack <int> s2;

int main() {
  int cnt = 1, inp;
  int T; scanf("%d", &T);
  int tmp = T; int tmp2 = T; int tmp3;
  while (T--){
    scanf("%d", &inp);
    tmp3 = inp;
    while (inp--){
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(cnt++);
    while (tmp3--){
      s1.push(s2.top());
      s2.pop();
    }
  }
  while(tmp--){
    s2.push(s1.top());
    s1.pop();
  }
  while(tmp2--){
    printf("%d ", s2.top());
    s2.pop();
  }
  printf("\n");
}
