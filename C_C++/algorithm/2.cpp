#include <cstdio>
#include <cmath>

int getThreshold(int n)
{
	int th;
	double k = floor(log(n) / log(2) - 6);
	th = (int)floor(n / pow(2.0, k)) + 1;
	return th;
}

int main(){
	printf("%d\n", getThreshold(72));
}