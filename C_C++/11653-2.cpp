#include <cstdio>

int main() {
	int N; scanf("%d", &N);
	for (int i = 2; i <= N; ++i)
	{
		while(!(N % i)){
			printf("%d\n", i);
			N /= i;
		}
	}
}