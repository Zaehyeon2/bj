
#include <stdio.h>

int gcd(int m, int n){
    if (n!= 0) return gcd(n, m%n);
    else return m;
}

int main(void) {
        printf("gcd(10, 15) = %d\n",gcd(10, 15));
        printf("gcd(125, 13) = %d\n",gcd(125, 13));
        printf("gcd(625, 225) = %d\n",gcd(625, 225));
        printf("gcd(6840, 324) = %d\n",gcd(6840, 324));
}
