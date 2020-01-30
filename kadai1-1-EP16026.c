#include<stdio.h>
//EP16026 Ogura.K
int main(void){
  int n,m,i,bag[32];
  scanf("%d\n",&n);
  for(i=0;i<=n;++i){
    scanf("%d\n",&m);
    bag[m]=bag[m]+1;
  }
  for(i=1;i<=32;++i){
    printf("%d\n",bag[i]);
  }
}

