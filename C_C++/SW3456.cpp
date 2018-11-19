#include <cstdio>



int main() {
	int N; scanf("%d", &N);
	for (int i = 1; i <= N; ++i)
	{
		int arr[101] = {};
		for (int i = 0; i < 3; ++i)
		{
			int tmp; scanf("%d", &tmp);
			arr[tmp]++;
		}
		printf("#%d ", i);
		for (int i = 1; i <= 100; ++i)
		{
			if(arr[i] == 1 || arr[i] == 3) printf("%d\n", i);
		}
	}
}