#include "stdio.h"

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
} /*이 부분 작성*/

int main() {
	int a = 5, b = 1;
	swap(&a, &b); /*함수에 전달해줄 파라미터 유의*/
	printf("%d %d\n", a, b);
}
