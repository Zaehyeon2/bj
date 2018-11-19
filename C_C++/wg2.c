#include <stdio.h>

typedef struct student {
  int kor;
  int eng;
  int math;
  char test_result;
}Student;

double final_score(Student s) {
	int test_score;
	double avg = (s.kor+s.math+s.eng) / 3.0;
	if(s.test_result == 'P')
		test_score = 20;
	else //if (s.test_result == ‘F’)
		test_score = 0;
	return avg + test_score;
}

int main(){
  int N;
  Student std[101];
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d %d %c", &std[i].kor, &std[i].math, &std[i].eng, &std[i].test_result);
    printf("%.1f\n", final_score(std[i]));
  }
}
