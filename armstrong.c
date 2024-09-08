# include<stdio.h>
# include<math.h>

int main(){
   int num, orgnum, rem, result=0, count=0;
   printf("enter the number: ");
   scanf("%d",&num);
   orgnum=num;

   int temp=num;
   while(temp!=0){
     temp/=10;
     count++;
   }

   orgnum=num;
   while(orgnum!=0){
    rem= orgnum%10;
    result= result+ pow(rem, count);
    orgnum /=10;
   }
   if(result==num){
    printf("%d is armstrong",num); }
   else{ 
    printf("%d not armstrong",num); }
    return 0;
}