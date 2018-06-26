#include <cstdio>
#include <string> /* for fucntion "to_string" and use string*/

using namespace std;

int main(void) {
    int N, sum = 0; scanf("%d", &N);
    if ( N <= 99) { /* if N < 100 , all N is "한수" */
        printf("%d\n", N);
        return 0;
    }
    else /* N < 100 count */
        sum += 99;
    for ( int i = 100; i <= N; i++){
        string tmp = to_string(i); /* int -> string fuction */
        if (tmp[0] + tmp[2] == tmp[1] * 2) /* tmp[1] - tmp[0] == tmp[2] - tmp[1] */
            sum++;
    }
    printf("%d\n", sum);
}
