#include <cstdio>
#include <vector>

using namespace std;

vector <int> a;
int c[200001];

int main(){
	int n, m; scanf("%d%d", &n, &m);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp; scanf("%d", &tmp);
		a.push_back(tmp);
		if(tmp == 0) c[0]++;
		else c[tmp%m]++;
	}
	for (int i = 0; i < m; ++i)
	{
		if(c[i] != n / m){
			for (int i = 0; i < a.size(); ++i)
			{
				if(a[i]%m != c[i]) {
					a[i]++; sum++; c[i] = a[i] % m;
				}
			}
		}
	}
	for (int i = 0; i < a.size(); ++i)
	{
		printf("%d ", a[i]);
	}
}