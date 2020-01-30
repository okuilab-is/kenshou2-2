#include<stdio.h>
int main(void){
  int i,n,h,x,num[13];
  scanf("%d\n",&n);
  for(i=0;i<13;i++){
    num[i]=-1;
  }
  for(i=0;i<n;i++){
    scanf("%d ",&x);
    h=x/13;
    if(num[h]=!-1){
      h=(x+1)/13;
    }
    num[h]=x;
  }
  for(i=0;i<13;i++){
    printf("%d ",num[i]);
  }
  return 0;
}
