#include <stdio.h>

int main(){
  int i,num,h,num2,n;

  scanf("%d",&n);
 
  int a[13];
  for(i=0;i<13;i++){
    a[i]=(-1);
  }

  for(i=0;i<n;i++){
    scanf("%d",&num);
    //printf("aa\n");
    h=num%13;
    while(a[h]!=(-1)){
      num2=num+1;
      h=num2%13;
    }  
    a[h]=num;
  }

  for(i=0;i<13;i++){
    printf("%d",a[i]);
  }  
  printf("\n");
}
