#include<stdio.h>

int main(){
  int n,i,x,p[32];
	for(i=0;i<32;i++) p[i]=0;
  scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&x);
		p[x]+=1;
	}
	for(i=0;i<32;i++){
	  printf("%d ",p[i]);
	}
	printf("\n");
}
