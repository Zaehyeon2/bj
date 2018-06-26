#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int N; scanf("%d",&N);
	int i = 1;
	while(N--){
		string inp; cin >> inp;
		string ans = "";
		for (int i = 0; i < inp.size(); ++i)
		{
			if(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u'){
				continue;
			}
			else ans += inp[i];
		}
		printf("#%d %s\n", i++,ans.c_str());
	}
}