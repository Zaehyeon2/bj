#include <cstdio>
#include <stack>

std::stack <int> s;

long long int sum;

int main(){
	int N; scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		int tmp; scanf("%d", &tmp);
		if(tmp == 0) s.pop();
		else s.push(tmp);
	}
	while(s.size()){
		sum += s.top();
		s.pop();
	}
	printf("%lld\n", sum);
}