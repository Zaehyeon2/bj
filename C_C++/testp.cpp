#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

vector<int> v;
priority_queue<int,vector<int> > pq;

int main(){
  int n, a, sum = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i ++){
    int x;
    scanf("%d", &x);
    pq.push(x);
    if(n == 1){
       sum = x;
       printf("%d", sum);
       return 0;
    }
  }
  for(int i = 0; i < n - 1; i ++){
    if(i == 0){
      a =  pq.top();
      pq.pop();
      sum += pq.top() + a;
      pq.pop();
    }
    else{
      a = sum;
      sum += pq.top() + a;
      pq.pop();
    }
  }
  printf("%d", sum);
}