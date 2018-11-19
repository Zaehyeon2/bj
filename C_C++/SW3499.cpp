#include <cstdio>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector <string> v1;
vector <string> v2;

int main(){
	int T; scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		int N; scanf("%d", &N);
		for(int j = 0; j < N; j++) {
			string inp; cin >> inp;
			if (j < N / 2 + N % 2) v1.push_back(inp);
			else v2.push_back(inp);
		}
		printf("#%d ", i+1);
		for (int j = 0; j < N / 2 + N % 2; ++j)
		{
			printf("%s ", v1[j].c_str());
			if(j < v2.size()) printf("%s ", v2[j].c_str());
		}
		printf("\n");
		v1.clear(); v2.clear();
	}
}