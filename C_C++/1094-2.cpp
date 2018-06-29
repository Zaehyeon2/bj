#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
   int X,i;
   int min = 64;
   int sum = 0,cnt = 0;
   cin>> X;
   if(X==64){
      sum += X;
      cnt += 1;
   }
   for(i=0;X>sum;i++){
      min /= 2;
      if(X>=sum + min){
         sum += min;
         cnt += 1;
      }
   }
   cout << cnt;
   return 0;
}