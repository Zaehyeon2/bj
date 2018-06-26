#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while (T--){
		string s;
		string ans;
		cin >> s;
		int cursor = 0;
		for ( i = 0; i < s.size(); i++){
			if (s[i] == '<' && cursor != 0) {
				cursor--;
			} 
			if (s[i] == '>' && cursor != ans.size()){
				cursor++;
			}
			if (s[i] == '-' && ans != ""){
				ans.pop_back();
			}
			if (s[i] != '-' && s[i] != '>' && s[i] != '<'){
				ans.append(s[i],cursor);
				cursor++;
			}
		}
	}
	printf("%s\n", ans);
	return 0;
}