#include <stdio.h>

int main(void){
	int n,i,j,num,x[13];
	scanf("&d",&n);
	for(i=0;i<13;i++){x[i]=-1;}
	for(i=0;i<n;i++){
		scanf("%d",&num);
		j=num%13;
		for(1;x[j]<0;j++){}
		x[j]=num;
	}

	for(i=0;i<13;i++){
		printf("%d\n",x[i]);
	}
}
