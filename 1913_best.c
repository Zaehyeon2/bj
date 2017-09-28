#include <cstdio>

int main(){
  int N,M,mat[999][999];
  scanf("%d %d",&N,&M);
  int num=N*N,i=-1,j=0,delta=1,limit=N,y,x;
  while(1){
    for(int p=0;p<limit;p++){
      i+=delta;
      if(num==M) y=i, x=j;
      mat[i][j]=num—;
    }
    limit—;
    if(limit<0) break;
    for(int p=0;p<limit;p++){
      j+=delta;
      if(num==M) y=i, x=j;
      mat[i][j]=num—;
    }
    delta=-delta;
  }
  for(int p=0;p<N;p++){
    for(int q=0;q<N;q++)
      printf("%d ",mat[p][q]);
    printf("\n");
  }
  printf("%d %d\n",y+1,x+1);
}
