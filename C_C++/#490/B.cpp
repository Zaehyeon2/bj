#include <cstring>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

string inp;

vector <int> v;

void divisor(int n){
	for(int i = 1; i <= n / 2; i++)
        if(n % i == 0)
            v.push_back(i);
    v.push_back(n);
}

void swap(int a, int b){
	if (a >= b) return;
	char tmp = inp[a];
	inp[a] = inp[b];
	inp[b] = tmp;
	b--;
	a++;
	swap(a, b);
}

int main(){
	int N; scanf("%d", &N);
	cin >> inp;
	divisor(N);
	for (int i = 0; i < v.size(); ++i)
	{
		swap(0, v[i]-1);
	}
	printf("%s\n", inp.c_str());
}