#include <stdio.h>
#include <string>

int strlen(char inp){

}

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    while(N--){
        int num = 0,sum = 0;
        char inp[81] = {};
        scanf("%s",inp);
        int len = strlen(inp);
        for (int i = 0; i < len; i++) {
            if (inp[i] == 'O'){
                num++;
                sum += num;
            }
            else {
                num = 0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
