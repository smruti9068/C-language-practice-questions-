# include<stdio.h>

int main(){
    char ch;
    printf("enter the character ");
    scanf("%d",&ch);
    if(ch>='0' && ch<='9'){
    printf("given character is a digit ");}
    else{
    printf("given character is not a digit ");}
    return 0;
}