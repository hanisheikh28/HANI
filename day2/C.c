#include<stdio.h>
int main()
{
    int a=10,b=20;
    if(a==b)
    {
        printf("a=",b);
    }
    else if(b==a)
    {
        printf("b=",a);
    }
    else{
        printf("no matching");
    }
    return 0;
}