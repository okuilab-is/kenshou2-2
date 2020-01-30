#include <stdio.h>
int main(void){
  int x,i,n,y[32];
  scanf("%ld\n",&n);
  for(i=0;i<31;i++){
    y[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%ld",&x);
    y[x]+=1;
  }
  for(i=0;i<31;i++){
    printf("%ld",y[i]);
  }
  return 0;
}
