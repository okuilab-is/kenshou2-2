#include<stdio.h>
int main(void){
  int i,max,num,a,ans[32];
  scanf("%d",&num);
  for(i=0;i<32;i++)ans[i]=-1;
  for(i=0;i<num;i++){
    scanf("%d",&a);
    for(;;){
      if(ans[a%13] != -1){
	ans[a%13]=a;
	break;
      }
      a++;
    }
  
  }
  for(i=0;i<13;i++)printf("%d ",ans[i]);
  printf("\n");
}
