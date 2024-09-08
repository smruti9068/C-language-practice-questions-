#include<stdio.h>
int main(){
    int start,end, isPrime=1;
    int n;
    printf("enter the starting number: ");
       scanf("%d",&start);
       printf("enter the ending number: ");
       scanf("%d",&end);
       for( n=start;n<=end;n++){
       if(n<=1){
        isPrime=1;
       } 
       for(int i=2;i<=n/2;i++){
        if(n%i==0){
        isPrime=0;
        break;
        }
   } 
       }
       
   if(isPrime==1){
    printf("prime number is %d",n);
   }
       

       printf("\n");
   return 0;
}