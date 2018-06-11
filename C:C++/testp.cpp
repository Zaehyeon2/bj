#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

vector <string> v;

int main() {
  while(1) {
    string tmp; cin >> tmp;
    if(tmp == "0") break;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size(); i++){
    printf("%s\n", v[i].c_str());
  }
  cout << v.size();
}
