#include<stdio.h>
int main(){
    int n = 1234;
    int sum =0;
    // int n = 4;
   for(int i=0;i<=4;i++){
    int rem = n%10;
     sum = sum+rem;
    n=n/10;

   } printf("%d",sum);
// while(n!=0){
//     int rem = n % 10;
//     sum = sum+rem;
//     n=n/10;

// } printf("%d",sum);

 return 0;
}