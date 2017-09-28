#include <cstdio>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector < vector <int > > tree(52);

int cnt = 0;
int D;

void order(int root){
	if (root == D){
		return;
	}
	if(tree[root].size() == 0){
		cnt++;
	}
	else if (tree[root].size() == 1 && tree[root][0] == D){
		cnt++;
	}
	for (int i = 0; i < tree[root].size(); i++){
		order(tree[root][i]);
	}
}

int main(int argc, char const *argv[])
{
	int N, root;
	cin >> N;
	for ( int i = 0; i < N ; i ++){
		int X;
		cin >> X;
		if (X == -1) {
			root = i;
		}
		else{
			tree[X].push_back(i);
		}
	}
	cin >> D;
	order(root);
	printf("%d\n", cnt);
	return 0;
}