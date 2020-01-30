#include<stdio.h>
//EP16026 Ogura.K
int main(void){
  int n,m,i,j,bag[32];
  scanf("%d\n",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&m);
    bag[m]=bag[m]+1;
  }
  for(j=1;j<=32;++j){
    printf("%d",bag[i]);
    printf("\n");
  }
}

