#include<stdio.h>

int main(void){
 int h[13],n,m=13,a,b,i;
 for(i=0;i<m;i++){
  h[i]=-1;
 }
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&a);
  b=a%m;
  while(h[b%m]!=-1){
   b++;
  }
  h[b%m]=a;
 }
 for(i=0;i<m;i++){
  printf("%d ",h[i]);
 }
 printf("\n");
}
