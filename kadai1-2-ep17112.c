#include<stdio.h>

int main(){
	int n,i,x,p[32]={};
  scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%d",&x);
		p[x]+=1;
	}
	for(i=0;i<32;i++){
	  for(;p[i]>0;p[i]--){
		  print("%d ",i);
		}
	}
	printf("\n");
}
