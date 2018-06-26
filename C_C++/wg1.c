#include <stdio.h>

double final_score(int kor, int math, int eng, char test_result) {
	int test_score;
	double avg = (kor+math+eng) / 3.0;
	if(test_result == 'P')
		test_score = 20;
	else //if (test_result == ‘F’)
		test_score = 0;
	return avg + test_score;
}


int main(){
 int kor, math, eng;
 char test_result;
 scanf("%d %d %d %c", &kor, &math, &eng, &test_result);
 printf("%.1f\n", final_score(kor, math, eng, test_result));

}
