#include <stdio.h>
int x[32];
int main(void){
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<32;i++){
		x[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d",&m);
		x[m]++;
	}
	for(i=0;i<32;i++){
		for(1;x[i]>0;x[i]--){
			printf("%d ",i);
		}
	}
	printf("\n");
}
