#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>

using namespace std;

bool prime[10000000];

int main(){
	int n; scanf("%d", &n);
	int cnt = 0;
    for (int p = 2; ; p++)
    {
        if (prime[p] == 0)
        {
        	cnt++;
        	if(cnt == n){
        		printf("%d\n", p);
        		return 0;
        	}
            for (int i = p * 2; i <= 10000000; i += p)
                prime[i] = 1;
        }
    }
}