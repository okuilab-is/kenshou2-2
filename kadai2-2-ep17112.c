#include<stdio.h>

int main(){
  int n,i,x,y,h[13]={};
	for(i=0;i<13;i++) h[i]=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&x);
		y=x;
		for(;h[x%13]!=-1;x++) h[x%13]=y;
	}
	for(i=0;i<13;i++) printf("%d ",h[i]);
  printf("\n");
}
