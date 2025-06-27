// write a p to find the difference between max & min ele
#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    for(int i=0;i<5;i++){
        // to find the max
            for(int j=i+1;j<i-1-5;j++){
                if(arr[0]<arr[j]){
                    int max = arr[0];
                    printf("%d",max); 
            } 
            
            
        }
    }
}