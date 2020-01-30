#include<stdio.h>

int main(){
  int n,i,x,h[13]={};
	for(i=0;i<13;i++) h[i]=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&x);
		h[x%13]=x;
	}
	for(i=0;i<13;i++) printf("%d ",h[i]);
  printf("\n");
}
