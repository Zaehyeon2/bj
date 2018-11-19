#include <cstdio>

int main() {
  int C; scanf("%d", &C);
  float stu[1001];
  while(C--) {
    int N; scanf("%d", &N);
    float sum = 0, avg = 0;
    float good = 0;
    for(int i = 0; i < N; i++){
      scanf("%f", &stu[i]);
      sum += stu[i];
    }
    avg = sum / N;
    for(int i = 0; i < N; i++){
      if(avg < stu[i]) good++;
    }
    printf("%.3f%%\n", (good / N) * 100);
  }
}
