#include<stdio.h>
int main(){
    int n;
      printf("enter the number: ");
      scanf("%d",&n);
   for(int i=1;i<=10;i++){
        n*=i;
          printf("product %d\n", n);
   }
    return 0;
}