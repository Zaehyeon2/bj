#include <cstdio>

int main(){
	long long n, k; scanf("%lld %lld", &n, &k);
	if(n * 2 <= k || k <= 2){
		printf("0\n");
		return 0;
	}
	if(k > n){
		printf("%lld\n", n - (k / 2));
	}
	else {
		if(!(k % 2)){ 
			printf("%lld\n", (k / 2) - 1);
		}
		else{
			printf("%lld\n", k / 2);
		}
	}
}