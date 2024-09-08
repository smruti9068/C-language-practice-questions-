# include<stdio.h>
int main(){
    int a,b;
    printf("Enter length:");
    scanf("%d",&a);
     printf("Enter width:");
    scanf("%d",&b);
    int perimeter=2*(a+b);
    printf("perimeter is: %d",perimeter);
    return 0;
}