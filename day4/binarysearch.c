// binary search
#include<stdio.h>
//user define function
int binarySearch(int arr[],int key){
 int index =-1;
 int element = key;
 while(low<=high){
    int low =0,high=n-1,mid=0;
    mid = low+high/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<=key)
    low = mid+1;
    else if(arr[mid]> target)
    high = mid -1;

 }
return n-1;

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int key= 8;
    int size = (sizeof(arr)/sizeof(arr[0]));
    printf("%d",binarySearch(arr,size,key));
    return 0;
}