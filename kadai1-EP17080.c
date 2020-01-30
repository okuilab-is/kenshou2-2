#include <stdio.h>
int main(void){
  int x,i,n,y[32];
  scanf("%d\n",&n);
  for(i=0;i<32;i++){
    y[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d",&x);
    y[x]+=1;
  }
  //----------------------//
  for(i=0;i<32;i++){
    for(y[i];y[i]>0;y[i]--){
      printf(" %d ",i);
    }
  }
  printf("\n");
  return 0;
}
