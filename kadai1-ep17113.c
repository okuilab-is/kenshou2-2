#include <stdio.h>

int main(){
  int a[32]={},i,x,j,n;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&x);
    a[x]+=1;
  }
  
  for(i=0;i<32;i++){
    for(j=0;j<a[i];j++){
      printf("%d ",i);
    }
  }  

  printf("\n");

}
