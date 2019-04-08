#include <cstdio>
#include <cstring>

int Sn[100];
int An[100];

int main(){
	char S[101]; scanf("%s", S);
	int N; scanf("%d", &N);
	int slen = strlen(S);
	for (int i = 0; i < slen; ++i)
	{
		Sn[S[i] - 'a']++;
	}
	char A[101];
	for(int i = 0; i < N; i++){
		scanf("%s", A);
		int alen = strlen(A);
		for (int j = 0; j < alen; ++j)
		{
			An[A[j] - 'a']++;
		}
	}
	for (int i = 'a'; i <= 'z'; ++i)
	{
		if(Sn[i] < An[i]){
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");
}