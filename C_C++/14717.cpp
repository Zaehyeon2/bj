#include <cstdio>

int main() {
  int A, B; scanf("%d%d", &A, &B);
  float score;
  if (A == B) score = 9 + A;
  else score = (A + B) % 10 ;
  printf("%.3f\n", score / 20);
}
