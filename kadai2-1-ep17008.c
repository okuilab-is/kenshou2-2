#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[13]={-1},i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		k=j%13;
		a[k]=j;
	}
	for(i=0;i<8;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
