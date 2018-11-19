#include <cstdio>

int sum;

int main(){
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		int tmp; scanf("%d", &tmp);
		sum += tmp;
		printf("%d ", sum / m);
		sum = sum % m;
	}
	printf("\n");
}