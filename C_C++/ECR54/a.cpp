#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int N; cin >> N;
	string inp; cin >> inp;
	int idx = 0;
	char min = 'z';
	char max = 'a'-1;
	string tmp = "";
	for (int i = 1; i < N; ++i)
	{
		if(min > inp[i] && max < inp[i-1]) {
			idx = i; min = inp[i];
			max = inp[i-1];
		}
	}
	for (int i = 0; i < idx - 1; ++i)
	{
		tmp += inp[i];
	}
	for (int i = idx; i < N; ++i)
	{
		tmp += inp[i];
	}
	cout <<tmp +  '\n';
}
