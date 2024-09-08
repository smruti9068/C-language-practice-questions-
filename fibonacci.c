#include<stdio.h>
int fibon(int n);
int main(){
fibon(3);
return 0;
}
int fibon(int n){
    if(n==0 || n==1)
   if(n==0)
   return 0;
   if(n==1)
   return 1;
   int fibn1=fibon(n-1);
    int fibn2=fibon(n-2);
    int fib=fibn1+fibn2;
    printf("fibonacci series %d is %d\n",n,fib);
}