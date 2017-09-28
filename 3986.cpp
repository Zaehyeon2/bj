#include <cstdio>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

stack <char> s;

int main(int argc, char const *argv[]) {
    int T;
    int ans = 0;
    cin >> T;
    while (T--){
        string inp;
        cin >> inp;
        for (int i = 0; i < inp.size(); i++) {
            if (s.empty()){
                s.push(inp[i]);
            }
            else{
                if ( s.top() == inp[i]){
                    s.pop();
                }
                else{
                    s.push(inp[i]);
                }
            }
        }
        if (s.empty()) {
            ans++;
        }
        stack <char> s;
    }
    printf("%d\n", ans);
    return 0;
}
