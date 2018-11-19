#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		int T2;
		cin >> T2;
		int ans = 0;
		vector <string> v;
		v.clear();
		for (int j = 0; j < T2; ++j)
		{
			string s;
			cin >> s;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		for (int j = 0; j < v.size()-1; ++j)
		{
			if (v[j] == v[j+1].substr(0,v[j].size())){
				ans = 1;
				break;
			}
		}
		if (ans == 1) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}
	return 0;
}
