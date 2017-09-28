#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]) {
	int T;
	scanf("%d", &T);
	while (T--){
		stack <string> s;
		string g;
		cin >> g;
		for ( int i = 0; i < g.size();i ++){
			if (g[i] == '('){
				s.push("(");
			}
			else {
				if (s.empty()){
					s.push(")");
					break;
				}
				else if (s.top() == "("){
					s.pop();
				}
				else if (s.top() == ")"){
					s.push(")");
					break;
				}
			}
		}
		if (s.empty()){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}