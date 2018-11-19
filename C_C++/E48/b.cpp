#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s, t;
	int n, m, q; 
	scanf("%d%d%d", &n, &m, &q);
	cin >> s >> t;
	vector <int> v;
	for (int j = 0; j <= n - m; ++j)
		{
			if(s.substr(j,m) == t) {
				v.push_back(j);
			}
		}
	for (int i = 0; i < q; ++i)
	{
		int l, r; cin >> l >> r;
		int sum = 0;
		for (int j = 0; j < v.size(); ++j)
		{
			if( l - 1 <= v[j] && v[j] + m - 1 <= r - 1) sum++;
		}
		printf("%d\n", sum);
	}

}