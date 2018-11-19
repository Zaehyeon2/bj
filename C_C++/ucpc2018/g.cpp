#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char inp[10001];
int bl;

int main(){
	scanf("%[^\n]s", inp);
	int ss = strlen(inp);
	for (int i = 0; i < ss; ++i)
	{
		if(bl == 0 && inp[i] == 'U'){
			bl++;
		}
		else if(bl == 1 && inp[i] == 'C'){
			bl++;
		}
		else if(bl == 2 && inp[i] == 'P'){
			bl++;
		}
		else if(bl == 3 && inp[i] == 'C'){
			bl++;
		}
	}
	if(bl >= 4){
		printf("I love UCPC\n");
	}
	else {
		printf("I hate UCPC\n");
	}
}