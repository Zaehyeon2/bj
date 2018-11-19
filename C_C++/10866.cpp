#include <cstdio>
#include <string>
#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	deque<int> dq;
	while ( N-- ){
		string s;
		cin >> s;
		if (s == "push_front"){
			int X;
			cin >> X;
			dq.push_front(X);
		}
		if (s == "push_back"){
			int X;
			cin >> X;
			dq.push_back(X);
		}
		if ( s== "pop_front"){
			if(dq.size()){
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else{
				printf("-1\n");
			}
		}
		if (s == "pop_back"){
			if (dq.size()){
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		if (s == "size"){
			printf("%lu\n", dq.size());
		}
		if ( s == "empty"){
			if (dq.empty()){
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		if (s == "front"){
			if (dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", dq.front());
			}
		}
		if (s == "back"){
			if (dq.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",dq.back() );
			}
		}
	}
	return 0;
}