// 2965 캉가루 삼마리

#include <stdio.h>
#include <string.h>

int Max(int a, int b){
	return a > b ? a : b;
}

int main(){
	int A, B, C; scanf("%d%d%d", &A, &B, &C);
	printf("%d\n", Max(B - A, C - B) - 1);
}