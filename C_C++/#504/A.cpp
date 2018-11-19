#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int A, B; scanf("%d %d", &A, &B);
	string Sa, Sb; cin >> Sa >> Sb;
	int star = -1;
	int Max = max(A, B);
	int Min = min(A, B);
	int tmp = -1;
	for (int i = 0; i < A; ++i)
	{
		if(Sa[i] == '*') star = i;
	}
	if(star == -1){
		if(Sa == Sb){
			printf("Yes\n");
			return 0;
		}
		else {
			printf("No\n");
			return 0;
		}
	}
	else if(star > Min){
		printf("No\n");
		return 0;
	}
	else {
		if(A - 1 > B) {
			printf("No\n");
			return 0;
		}
		for (int i = 0; i < star; ++i)
		{
			if(Sa[i] != Sb[i]){
				printf("No\n");
				return 0;
			}
			tmp = i;
		}
		for(int i = 0; i < A - star - 1; i++){
			if(Sa[A-1-i] != Sb[B-1-i]){
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}