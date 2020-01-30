#include <stdio.h>
int main(void){
  int x,i,n,y[32];
  scanf("%d\n",&n);
  for(i=0;i<31;i++){
    y[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d",&x);
    y[x]+=1;
  }
  for(i=0;i<31;i++){
    printf("%d",y[i]);
  }
  return 0;
}
