#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int Sg[7] = {};
stack <int> Pg1;
stack <int> Pg2;
stack <int> Pg3;
stack <int> Pg4;
stack <int> Pg5;
stack <int> Pg6;

int main(int argc, char const *argv[])
{
	int N, P, ans = 0;
	cin >> N >> P;
	while (N--){
		int Sn, Pn;
		cin >> Sn >> Pn;
		if ( Sn == 1){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg1.push(Pn);
				ans++;
			}
			else {
				if (Pg1.top() > Pn){
					while(Pg1.empty() == 0 && Pg1.top() > Pn){
						ans ++;
						Pg1.pop();
					}
					if (Pg1.empty()){
						ans++;
						Pg1.push(Pn);
					}
				}
				if (Pg1.empty() == 0 && Pg1.top() < Pn){
					Pg1.push(Pn);
					ans++;
				}
			}
			if (Pg1.empty()){
				Sg[Sn] = 0;
			}

		}

		if ( Sn == 2){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg2.push(Pn);
				ans++;
			}
			else {
				if (Pg2.top() > Pn){
					while(Pg2.empty() == 0 && Pg2.top() > Pn){
						ans ++;
						Pg2.pop();
					}
					if (Pg2.empty()){
						ans++;
						Pg2.push(Pn);
					}
				}
				if (Pg2.empty() == 0 && Pg2.top() < Pn){
					Pg2.push(Pn);
					ans++;
				}
			}
			if (Pg2.empty()){
				Sg[Sn] = 0;
			}
			
		}
		if ( Sn == 3){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg3.push(Pn);
				ans++;
			}
			else {
				if (Pg3.top() > Pn){
					while(Pg3.empty() == 0 && Pg3.top() > Pn){
							ans ++;
							Pg3.pop();
					}
					if (Pg3.empty()){
						ans++;
						Pg3.push(Pn);
					}
				}
				if (Pg3.empty() == 0 && Pg3.top() < Pn){
					Pg3.push(Pn);
					ans++;
				}
			}
			if (Pg3.empty()){
				Sg[Sn] = 0;
			}
			
		}
		if ( Sn == 4){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg4.push(Pn);
				ans++;
			}
			else {
				if (Pg4.top() > Pn){
					while(Pg4.empty() == 0 && Pg4.top() > Pn){
							ans ++;
							Pg4.pop();
					}
					if (Pg4.empty()){
						ans++;
						Pg4.push(Pn);
					}
				}
				if (Pg4.empty() == 0 && Pg4.top() < Pn){
					Pg4.push(Pn);
					ans++;
				}
			}
			if (Pg4.empty()){
				Sg[Sn] = 0;
			}
			
		}
		if ( Sn == 5){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg5.push(Pn);
				ans++;
			}
			else {
				if (Pg5.top() > Pn){
					while(Pg5.empty() == 0 && Pg5.top() > Pn){
						ans += Pg5.top() - Pn;
						Pg5.pop();
					}
					if (Pg5.empty()){
						ans++;
						Pg5.push(Pn);
					}
				}
				if (Pg5.empty() == 0 && Pg5.top() < Pn){
					Pg5.push(Pn);
					ans++;
				}
			}
			if (Pg5.empty()){
				Sg[Sn] = 0;
			}
			
		}
		if ( Sn == 6){
			if (Sg[Sn] == 0){
				Sg[Sn] = 1;
				Pg6.push(Pn);
				ans++;
			}
			else {
				if (Pg6.top() > Pn){
					while(Pg6.empty() == 0 && Pg6.top() > Pn){
						ans += Pg6.top() - Pn;
						Pg6.pop();
					}
					if (Pg6.empty()){
						ans++;
						Pg6.push(Pn);
					}
				}
				if (Pg6.empty() == 0 && Pg6.top() < Pn){
					Pg6.push(Pn);
					ans++;
				}
			}
			if (Pg6.empty()){
				Sg[Sn] = 0;
			}
			
		}
	}
	printf("%d\n", ans);
	return 0;
}