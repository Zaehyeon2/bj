#include <stdio.h>

int arr[2000001];

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    while(N--){
        int inp;
        scanf("%d",&inp );
        arr[inp+1000000] = 1;
    }
    for (int i = 0; i < 2000001; i++) {
        if (arr[i] == 1){
            printf("%d\n",i-1000000 );
        }
    }
    return 0;
}
