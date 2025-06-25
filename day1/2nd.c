#include<stdio.h>
int main(){
    int num = 10;
    if((num & 1)==0){
        printf("even\a");

    }  else printf("odd");
    return 0;
}