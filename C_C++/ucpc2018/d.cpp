#include <cstdio>
#include <vector>

using namespace std;

vector < vector <int> > tree(500001);
bool chk[500001][500001];
int sum;

void inorder(int node){
	for(int i = 0; i < tree[node].size(); i++){
		if(chk[node][i] == 0){
			sum++;
			chk[node][i] = 1;
			chk[i][node] = 1;
			inorder(tree[node][i]);
		}
	}
}

int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n - 1; ++i)
	{
		int u, v; scanf("%d%d", &u, &v);
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	inorder(1);
	printf("%d\n", sum);
	if(sum % 2 == 1) printf("Yes\n");
	else printf("No\n");
}