#include <cstdio>

long long sum;

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		sum += 1 + (n - 1) / i;
	}
	printf("%lld\n", sum);
}