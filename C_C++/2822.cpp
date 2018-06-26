#include <cstdio>
#include <iostream>
#include "vector"

using namespace std;

vector <pair <int, int> > inp;
int sum;
int arr[9] = {};

int main(int argc, char const *argv[]) {
    for (int i = 1; i < 9; i++) {
        int N;
        cin >> N;
        inp.push_back(make_pair(N, i));
    }
    sort(inp.begin(),inp.end());
    for (int k = 0; k < 5; k++) {
        sum += inp[7-k].first;
        arr[inp[7-k].second] = 1;
    }
    printf("%d\n", sum);
    for (int j = 0; j < 9; j++) {
        if (arr[j] == 1){
            printf("%d ", j);
        }
    }

    return 0;
}
