#include <cstdio>

int ans[200001];

int main() {
	int n, q; scanf("%d%d", &n, &q);
	bool qe = 0;
	int zero = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &ans[i]);
		if(ans[i] == q){
			qe = 1;
		}
		if(ans[i] == 0){
			zero++;
		}
	}
	if(zero == 0 && qe == 0){
		printf("NO\n");
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		if(ans[i] == 0){
			if(qe == 0){
				ans[i] = q;
				qe = 1;
			}
			else {
				ans[i] = 1;
			}
		}

	}
	for (int i = q; i > 0; --i)
	{
		bool big = 0;
		int small = 0;
		for (int j = 0; j < n; j++)
		{
			if(ans[j] == i) {
				big = !big;
			}
			if(big == 1){
				if(ans[j] < i){
					small++;
				}
			}
			if(big == 0){
				if(small != 0){
					printf("NO\n");
					return 0;
				}
			}
		}
	}
	printf("YES\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ans[i]);
	}
	printf("\n");
}