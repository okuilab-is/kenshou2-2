#include<stdio.h>

int main(){
  int num,i,k,n,h[8];
  for(i=0;i<8;i++){
    h[i] = -1;
  }
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&num);
    k = num % 8;
    while(h[k]!=-1){
      k++;
    }
    h[k] = num;
  }

  for(i=0;i<8;i++){
    printf("%d \n",h[i]);  
  }
  return 0;
}
