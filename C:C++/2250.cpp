#include <vector>
#include <iostream>
#include <cstdio>

using namespace std; 

vector < pair < int, int > > tree(10001);
vector < pair < int, int > > treerc(10001);
int col = 1;
int row;

void order(int root){
	row++;
	order(); //left
	//root
	order(); //right
	row--;
}
int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while (T--){
		int Nod, left, right;
		cin >> Nod >> left >> right;
		tree[Nod].push_back(make_pair(left, right));
	}
	
	return 0;
}