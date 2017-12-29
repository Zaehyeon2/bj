#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
  string s; cin >> s;
  int len = s.size(), sum = 0;
  for (size_t i = 0; i < len; i++) {
    if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') sum += 2;
    if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') sum += 3;
    if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') sum += 4;
    if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') sum += 5;
    if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') sum += 6;
    if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') sum += 7;
    if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') sum += 8;
    if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') sum += 9;
    sum += 1;
  }
  printf("%d\n", sum);
}
