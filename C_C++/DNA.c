// Made by TheKinGoD (Hanyang Univ. ERICA 2017011830 김재현)
// Algorithm Academy 0&1, 영과일

#include <stdio.h>
#include <string.h> // strlen()

char stack[11];
int top = -1;

void stack_push(char input){ // char인자를 받아 번역 후 스택에 삽입
	if(top >= 11) {
		printf("stack overflow\n");
		return;
	}
	char trans; // 번역된 염기
	if(input == 'A'){
		trans = 'T';
	}
	else if(input == 'T'){
		trans = 'A';
	}
	else if(input == 'C'){
		trans = 'G';
	}
	else {
		trans = 'C';
	}
	stack[++top] = trans; // stack에 번역된 염기 삽입
}

char stack_pop(){ // stack에서 하나를 제거 후 그 값을 반환
	if(top == -1) {
		printf("stack underflow\n");
		return 0;
	}
	return stack[top--]; //top을 반환 후 --
}

int main(){
	char DNA[11] = {};
	char a;

	printf("clone or transcription\n");
	printf("clone is c, transcription is t\n");

	scanf("%c", &a);

	if(a == 'c'){
		printf("복제하고싶은 DNA코드를 입력하세요(최대 10개) : ");
		scanf("%s", DNA);

		printf("DNA코드 확인 5'-%s-3'\n", DNA);
	}

	else if( a == 't'){
		printf("번역하고싶은 DNA코드를 입력하세요(최대 10개) : ");
		scanf("%s", DNA);

		int DNAlen = strlen(DNA); //DNA 염기 서열의 길이

		for (int i = DNAlen - 1; i >= 0; --i) //DNA를 거꾸로 스택에 삽입
		{
			stack_push(DNA[i]);
		}

		printf("DNA 코드 확인 5'-");
		while(top > -1){ // stack이 빌 때 까지
			printf("%c", stack_pop()); // stack에서 pop한 순서대로 출력
		}
		printf("-3'\n");
	}
}