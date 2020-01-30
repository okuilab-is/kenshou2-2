#include<stdio.h>
int main(){
	int a[13]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		k=j%13;
		while(a[k]>0){k=(j+1)%13;
                        a[k]=j;
                }
		while(a[k]<0){a[k]=j;}
	}
	for(i=0;i<13;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
