#include<stdio.h>
#define B 32

int main(){
  int i,n,num,b[B];
  for(i=0;i<B;i++){
    b[i]=0;
  }
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&num);
    b[num]+=1;
  }

  for(i=0;i<B;i++){
    while(b[i]!=0){
      printf("%d ",i);
      b[i]--;
    }
  }
  printf("\n");
  return 0;
}
