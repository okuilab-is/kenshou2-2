#include<stdio.h>
//EP16026 Ogura.K
int main(void){
  int n,m,i,bag[31];
  scanf("%d\n",&n);
  for(i=0;i<=31;++i){
    bag[i]=0;
  }
  for(i=0;i<n;++i){
    scanf("%d",&m);
    bag[m]=bag[m]+1;
  }
  printf("%d\n",bag[]);
}

