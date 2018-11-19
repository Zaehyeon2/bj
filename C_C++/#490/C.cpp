#include <cstdio>
#include <string>
#include <vector>
#include "iostream"
#include "algorithm"

int arr[1000];

using namespace std;

vector<pair<int, int> > v1;
vector<pair<int, int> > v2;

int main(){
	int n, k; scanf("%d%d", &n, &k);
	string inp; cin >> inp;
	for (int i = 0; i < inp.size(); ++i)
	{
		v1.push_back(make_pair(inp[i], i));
	}
	sort(v1.begin(), v1.end());	
	for (int i = k; i < v1.size(); ++i)
	{
		v2.push_back(make_pair(v1[i].second, v1[i].first));
	}
	sort(v2.begin(), v2.end());
	for (int i = 0; i < v2.size(); ++i)
	{
		printf("%c", v2[i].second);
	}
}