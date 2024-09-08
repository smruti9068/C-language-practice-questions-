
#include<stdio.h>
int factno(int n);
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
  printf("factorial of a number %d is %d\n",n,factno(n));
  return 0;
}
int factno(int n){
    if(n==0)
    return 1;
    else
    return n*factno(n-1);
    }
