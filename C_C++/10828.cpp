#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int T;
	int stack[10001] = {}, top = 0;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		if (s == "push"){
			int X;
			cin >> X;
			stack[top++] = X;
		}
		if (s == "pop"){
			if (top == 0){
				printf("-1\n");
			}
			else {
				cout << stack[--top] << endl;
			}
		}
		if (s == "size"){
			cout << top << endl;
		}
		if (s == "empty"){
			if (top == 0){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
		}
		if (s == "top"){
			if (top == 0){
				printf("-1\n");
			}
			else{
				cout << stack[top-1] << endl;
			}
		}
	}
	return 0;
}