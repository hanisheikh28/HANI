// #include<stdio.h>
// int main(){
//     char ch = 'a';
//     printf("%d",ch);
// }

// print ascii value using switch statement

#include<stdio.h>
int main(){
    printf("enter your option: '+','-', '*', '/'");
    char ch;
    scanf("%c",&ch);
    int a=10,b =20;
    switch(ch){
        case '+' : printf("%d",a+b);
            break;
        case '-' : printf("%d",a-b);
            break;
        case '*' : printf("%d",a*b);
            break;
        case '/' : printf("%d",a/b);
            break;
    }
    return 0;
}