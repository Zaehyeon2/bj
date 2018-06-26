#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n, p; scanf("%d%d", &n, &p);
	int bl = 0;
	string inp; cin >> inp;
	for (int i = 0; i < n-p; ++i)
	{
		if(inp[i] != inp[i+p]) bl = 1;
		if(inp[i] == '.' && inp[i] == inp[i+p]) bl = 1;
	}
	if(bl == 0){
		printf("No\n");
		return 0;
	}
	for(int i = 0; i < n; i++){
		if(inp[i] == '.' && inp[i+p] == '0'){
			inp[i] = '1';
		}
		if(inp[i] == '.' && inp[i+p] == '1'){
			inp[i] = '0';
		}
		if(inp[i] == '0' && inp[i+p] == '.'){
			inp[i+p] = '1';
		}
		if(inp[i] == '1' && inp[i+p] == '.'){
			inp[i+p] = '0';
		}
		if(inp[i] == '.' && inp[i+p] == '.') {
			inp[i] = '0'; inp[i+p] = '1';
		}
		if(inp[i] == '.') inp[i] = '0';
		
	}
	printf("%s\n", inp.c_str());
}