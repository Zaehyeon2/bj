#include <cstdio>

int main(int argc, char const *argv[]) {
    int A, B, C; scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", (B - A - 1) + (C - B - 1) - 1);
    return 0;
}
