#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int T;
		scanf("%d", &T);
		string ans;
		cin >> ans;
		for (int j = 0; j < T - 1; j++)
		{
			string s;
			cin >> s;
			if (ans > s) {
				ans = s + ans;
			}
			else {
				ans = ans + s;
			}
		}
	cout << ans << endl;;
	}
	return 0;
}
