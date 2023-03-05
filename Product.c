#include<stdio.h>
int main(){
  int n,i,j,prd;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      prd=i*j;
      printf("%d  ",prd);
    }
    printf("\n");
  }
  return 0;
}
