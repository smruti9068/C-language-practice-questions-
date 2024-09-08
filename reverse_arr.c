#include <stdio.h>
int reverse_arr(int arr[],int n);

int main(){
int arr[]={1,2,4,5,7};
 reverse_arr(arr,5);
    for(int i=0;i<=n;i++){
        printf("%d", arr[i]);
    }
return 0;
}
void reverse_arr(int arr[],int n){
    int firstval=0;
    for(int i=0;i<=n/2;i++){
        int firstval=arr[i];
       arr[i]=arr[n-i-1];
        arr[n-i-1]=firstval;
    }
}