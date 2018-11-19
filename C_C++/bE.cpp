#include <cstdio>
#include <algorithm>

using namespace std;

int dp[100001];
int inp[100001];

int main(){
	int n; scanf("%d", &n);
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &inp[i]);
		dp[i] = 1;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if(inp[i] == inp[j] - 1){
				// printf("%d %d %d %d\n", i, j, dp[i], dp[j]);
				dp[j] = dp[j] >= dp[i] + dp[j] ? dp[j] : dp[i] + 1;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		// printf("%d\n", dp[i]);
		if(dp[i] > max) max = dp[i];
	}
	printf("%d\n", max);
}