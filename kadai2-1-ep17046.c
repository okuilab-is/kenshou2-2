#include<stdio.h>

int main(void){
 int h[13],n,m=13,a,i;
 for(i=0;i<m,i++){
  h[i]=-1;
 }
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&a);
  h[a%m]=a;
 }
 for(i=0;i<m;i++){
  printf("%d ",h[i]);
 }
}
