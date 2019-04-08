#include <stdio.h>
#include <math.h>

int main() {
	double A = 0.66666666;
	int C = round(A*1000);
	printf("%d %.5f\n", C, (float)C/1000);
}