#include<stdio.h>
//EP16026 Ogura.K
int main(void){
  int n,m,i,bag[32]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
  scanf("%d\n",&n);
  for(i=0;i<n;++i){
    scanf("%d",&m);
    bag[m]=bag[m]+1;
  }
  for(i=0;i<32;++i){
    printf("%d",bag[i]);
  }
  printf("\n");
  return 0
}

