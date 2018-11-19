#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", max(abs(a - b), abs(b - c))-1);
}