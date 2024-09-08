#include<stdio.h>
int main(){
    int n, isPrime=1;
    printf("enter the number: ");
       scanf("%d",&n);
       if(n<=1){
        isPrime=0;
       } 
       for(int i=2;i<=n/2;i++)
       {
        if(n%i==0){
        isPrime=0;
        break;
        }
   } 
   if(isPrime){
    printf("prime number");
   }
   else{
     printf("not prime number");
   }
  }