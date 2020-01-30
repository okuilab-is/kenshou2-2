#include<stdio.h>

int main(void){
 int i,n,b,a[32]={};
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&b);
  a[b]+=1;
 }
 for(i=0;i<32;i++){
  for(;a[i]>0;a[i]--){
   printf("%d ",i);
  }
 }
 printf("\n");
}

