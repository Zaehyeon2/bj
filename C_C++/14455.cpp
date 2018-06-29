#include <map>
#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair<int, int> >v(7);

int chk[10001];

string namea[7] = {"Bessie","Elsie","Daisy","Gertie","Annabelle","Maggie","Henrietta"};

int main(){
	int N; scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		string name; int milk;
		cin >> name >> milk;
		for (int i = 0; i < 7; ++i)
		{
			v[i].second = i;
		}
		for (int i = 0; i < 7; ++i)
		{
			if(name == namea[i]){
				v[i].first += milk;
			}
		}
	}
	sort(v.begin(), v.end());
	int Min = v[0].first;
	for (int i = 0; i < 7; ++i)
	{
		chk[v[i].first]++;
	}
	for (int i = 0; i < 7; ++i)
	{
		if(v[i].first != Min && chk[v[i].first] == 1){
			printf("%s\n", namea[v[i].second].c_str());
			return 0;
		}
	}
	printf("Tie\n");
}