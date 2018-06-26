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
	vector <pair<int,pair<int,string> > > v;
	for (int i = 0; i < T; ++i)
	{
		string s;
		cin >> s;
		int sernum = 0;
		for ( int j = 0 ; j < s.size(); j ++){
			if (s[j] >= '0' and s[j] <= '9'){
				sernum += s[j] - '0';
			}
		}
		v.push_back(make_pair(s.size(),make_pair(sernum,s)));
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		printf("%s\n", v[i].second.second.c_str());
	}
	return 0;
}