#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int T;
  cin >> T;
  vector<pair<int,string> > ans;
  while(T--){
  	string s;
  	string anss;
  	string anstmp;
  	cin >> s;
  	s += "a";
  	for (int i = 0 ; i < s.size(); i++){
  		if ('0' <= s[i] && s[i] <= '9'){
  			anss += s[i];
  		}
  		else {
  			if (anss != ""){
  				if (anss == "0"){
  					ans.push_back(make_pair(anss.size(),anss));
  				}
  				else {
  					for (int j = 0 ; j < anss.size(); j ++){
  						if (anss[j] == '0'){
  							continue;
  						}
  						else {
  							anss = anss.substr(j,anss.size()-j);
  							break;
  						}
  					}
  					if (anss[0] == '0' && anss.size() > 1){
  						anss = "0";
  					}
  					ans.push_back(make_pair(anss.size(),anss));
  					anss = "";
  				}
  			}
  		}
  	}
  }
  sort(ans.begin(),ans.end());
  for ( int i = 0; i < ans.size();i ++){
  	cout << ans[i].second << endl;
  }
  return 0;
}
