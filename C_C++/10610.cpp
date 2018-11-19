#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string str; cin >> str;
  int strsize = str.size();
  sort(str.begin(),str.end());
  int sum = 0;
  for (int i = 0; i < strsize; i++){
    sum += str[i];
  }
  if (str[0] != '0' || sum % 3 != 0){
    printf("-1\n");
    return 0;
  }
  for(int i = strsize - 1; i >= 0; i--){
    printf("%c", str[i]);
  }
  printf("\n");
}
