#include<stdio.h>
int printodd(int arr[],int n);
int main(){
    int arr[]={1,2,6,8,4,5};
    printf("%d" ,printodd(arr,5));
    return 0;
}
int printodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 !=0){
            count++;
    }
}
return count;
}