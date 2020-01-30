#include<stdio.h>
int a[64];
int main(void){
  int i,j,max,num,now=0;
  scanf("%d",&max);
  for(i=0;i<max;i++){
    scanf("%d",&num);
    a[num]++;
  }
  for(i=0;i<32;i++){
    for(j=0;j<a[j];j++){
      printf("%d ",j);
    }
  }
  
  printf("\n");
}
