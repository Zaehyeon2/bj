# include <stdio.h>
# include <string.h>


int main(){
	char a[101];
	char b[101];
	char c;
	char d[101];
	scanf("%s\n",a);
	scanf("%c\n",&c);
	scanf("%s\n",b);
	int A, B;
	int P;
	int p[300];
	if(c==43){
		for(int i=0;i<101;i++){
			if(a[i]==49&&b[i]==49){
				d[i] = 50;
			}
			else if(a[i]==49&&b[i]==48){
				d[i] = 49;
			}
			else if(a[i]==48&&b[i]==49){
				d[i] = 49;
			}
			else if(a[i]==48&&b[i]==48){
				d[i] = 48;
			}
		}
		printf("%s\n",d);
	}
	else if(c==42){
		int A = strlen(a);
		int B = strlen(b);
		int P = A+B-1;
		p[0] = 1;
		for(int k=1;k<P;k++){
			p[k] = 0;
		}
		for(int j=0;j<P;j++){
			printf("%d ",p[j]);
		}

	}
}


//10의3승 길이 4/0 개수 3
//10의 4승 길이 5/0개수 4

//10의 7승 길이 8/0 개수 7
