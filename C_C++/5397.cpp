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
		for ( int i = 0; i < s.size(); i++){
			if (s[i] == '<' && cursor != 0) {
				cursor--;
			} 
			if (s[i] == '>' && cursor != ans.size()){
				cursor++;
			}
			if (s[i] == '-' && ans != ""){
				if (cursor == 0){
					ans = ans;
				}
				else{
					if (cursor != ans.size()){
						ans = ans.substr(0,cursor-1) + ans.substr(cursor);
					}
					else{
						ans = ans.substr(0,ans.size()-1);
					}
					cursor--;
				}
			}
			if (s[i] != '-' && s[i] != '>' && s[i] != '<'){
				if (ans == ""){
					ans = s[i];
					cursor++;
					continue;
				}
				ans = ans.substr(0,cursor) + s[i] + ans.substr(cursor);
				cursor++;
			}
		}
		printf("%s\n", ans.c_str());
	}
	return 0;
}


str += a;
str = a + str;