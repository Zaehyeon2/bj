#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int queue[10001];
int front = 0;
int back = 0;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		if( s == "push"){
			int X;
			cin >> X;
			queue[back++] = X;
		}
		if (s == "pop"){
			if ( front == back){
				printf("-1\n");
			}
			else{
				printf("%d\n", queue[front++]);
			}
		}
		if (s == "size"){
			printf("%d\n", back-front);
		}
		if (s == "front"){
			if (front == back){
				printf("-1\n");
			}
			else{
				printf("%d\n",queue[front]);
			}
		}
		if(s == "back"){
			if( front == back){
				printf("-1\n");
			}
			else{
				printf("%d\n",queue[back-1] );
			}
		}
		if (s == "empty"){
			if (front == back){
				printf("1\n");
			}
			else{
				printf("0\n");
			}

		}

	}
	return 0;
}