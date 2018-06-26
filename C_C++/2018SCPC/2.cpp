#include <string>
#include <vector>
#include <cstdio>

using namespace std;

vector <int> pel;

bool ispel(string &s, int a, int b){
	if(a >= b) return true;
	if(s[a] != s[b]) return false;
	return ispel(s, ++a, --b);
}

void pelmade(){
	for(int i = 1; i <= 10000; i++){
		string tmp = to_string(i);
		if (ispel(tmp, 0, tmp.size() - 1)) pel.push_back(i);
	}
}

int main() {
	pelmade();
	int T; scanf("%d", &T);
	int i, j, k;
	int ss = pel.size();
	for (int TC = 0; TC < T; ++TC)
	{
		int n; scanf("%d", &n);
		printf("Case #%d\n", TC+1);
		string tmp = to_string(n);
		if(ispel(tmp, 0, tmp.size()-1)){
			printf("1 %d\n", n);
			continue;
		}
		for(i = 0; i < ss; i++){
			for(j = i; j < ss; j++){
				if (pel[i] + pel[j] == n) {
					printf("2 %d %d\n", pel[j], pel[i]);
					break;
				}
			}
			if (pel[i] + pel[j] == n) {
				break;
			}
		}
		if (pel[i] + pel[j] == n) {
			continue;
		}
		for (i = 0; i < ss; i++){
			for(j = i; j < ss; j++) {
				for(k = j; k < ss; k++){
					if(pel[i] + pel[j] + pel[k] == n){
						printf("3 %d %d %d\n", pel[k], pel[j], pel[i]);
						break;
					}
				}
				if(pel[i] + pel[j] + pel[k] == n){
					break;
				}
			}
			if(pel[i] + pel[j] + pel[k] == n){
				break;
			}
		}
		if(pel[i] + pel[j] + pel[k] == n){
			continue;
		}
		printf("0\n");
	}
}