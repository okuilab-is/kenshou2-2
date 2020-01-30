#include<stdio.h>
#define H 13
int main(){
  int num,i,k,n,h[H];
  for(i=0;i<H;i++){
    h[i] = -1;
  }
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&num);
    k = num % H;
    while(h[k]!=-1){
      k++;
    }
    h[k] = num;
  }

  for(i=0;i<H;i++){
    printf("%d \n",h[i]);  
  }
  return 0;
}
