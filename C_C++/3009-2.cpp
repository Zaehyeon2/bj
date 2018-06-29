#include <stdio.h>
int main(){
	int x[3];
	int y[3];
	int g,h;
	for(int i=0; i<3; i++){
		scanf("%d %d",&x[i],&y[i]);
		if(x[0]=x[1]){
			g=x[2];
		}
		else if(x[0]=x[2]){
			g=x[1];
		}	
		else if(x[1]=x[2]){
			g=x[0];
		}
		if(y[0]=y[1]){
			h=y[2];
		}
		else if(y[1]=y[2]){
			h=y[0];
		}
		else if(y[0]=y[2]){
			h=y[1];
		}
		printf("%d %d",g,h);
	}
}