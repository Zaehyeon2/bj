#include <cstdio>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int n, k; scanf("%d%d", &n, &k);
	string inp; cin >> inp;
	int tmp1 = 0, tmp2 = 0;
	int size = inp.size();
	string ans = "";
	for (int i = 0; i < size; ++i)
	{	
		if(inp[i] == '(' && tmp1 < k / 2){
			ans += '(';
			tmp1++;
		}
		if(inp[i] == ')' && tmp2 < k / 2){
			ans += ')';
			tmp2++;
		}
	}
	cout << ans << '\n';
}