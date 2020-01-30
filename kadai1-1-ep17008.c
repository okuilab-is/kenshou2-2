#include <stdio.h>
int main(){
	int a[32]=0,i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		a[j]+=1;
	}
	for(i<0;i<32;i++){
	printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
