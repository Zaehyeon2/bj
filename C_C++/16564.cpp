#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

bool check(int level, int K, int N){
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        if(arr[i] < level){
            sum += level - arr[i];
        }
    }
    return sum > K;
}

int main(){
    int N, K; cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int lo = 0, hi = 1000000001, mid = 0;
    while(lo+1 < hi){
        mid = (lo+hi)/2;
        if(check(mid, K, N)){
            hi = mid;
        }
        else{
            lo = mid;
        }
        // printf("%d\n", mid);
    }
    printf("%d\n", lo);
}