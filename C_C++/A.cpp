#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int arr[105];

bool chk(int i){
	string tmp = to_string(arr[i]);
	for (int i = 0; i < tmp.size(); ++i)
	{
		if(tmp[i] == '0' || stoi(tmp) < 100) return 0;
	}
	return true;
}

int main(){
	string inp; cin >> inp;
	for(int i = 0; i < inp.size(); i++){
		int bi = i, ni = i + 2;
		if(inp[i] == 'A'){
			arr[i+1] += 100;
			arr[bi] += 100;
			arr[ni] += 100;
		}
		else if(inp[i] == 'B'){
			arr[i+1] += 10;
			arr[bi] += 10;
			arr[ni] += 10;
		}
		else if(inp[i] == 'C'){
			arr[i+1] += 1;
			arr[bi] += 1;
			arr[ni] += 1;

		}
	}

	for (int i = 1; i <= inp.size(); ++i)
	{
		if(chk(i)){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
}