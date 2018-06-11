#include <cstdio>
#include <string>
#include <map>
#include <string.h>

using namespace std;

char pnum[100001][21];
map<string, int> pname;
int N;

int main() {
	int M; scanf("%d%d", &N, &M);
	int tmpi;
	char tmps[21];
	for (int i = 0; i < N; ++i)
	{
		scanf("%s", pnum[i]);
		pname.insert(make_pair(pnum[i], i));
	}
	for (int i = 0; i < M; ++i)
	{
		scanf("%s", tmps);
		if('0' <= tmps[0] && tmps[0] <='9') printf("%s\n", pnum[atoi(tmps)-1]);
		else printf("%d\n", pname.find(tmps)->second+1);
	}
}