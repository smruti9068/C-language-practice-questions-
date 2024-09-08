#include<stdio.h>
int main(){
    do{
        int n;
       printf("enter the number: ");
       scanf("%d",&n);
       if(n%2!=0) {
       break;
       }
    }
    while(1);
    printf("odd");
    return 0;
    }
}