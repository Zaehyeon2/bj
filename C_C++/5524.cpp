#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    while (N--) {
        string Si;
        string ans;
        cin >> Si;
        int Sn = Si.size();
        for (int i = 0; i < Sn; i++) {
            if (Si[i] < 'a') {
                ans += Si[i] + ('a' - 'A');
            }
            else {
                ans += Si[i];
            }
        }
        printf("%s\n", ans.c_str());
    }
    return 0;
}
