#include <stdio.h>
int main(){
	int a[32]={0},i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		a[j]=a[j]+1;
	}
	for(i=0;i<32;i++){
		for(j=0;j<a[i];j++){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
