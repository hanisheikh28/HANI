// program to check if a given character is a vowel or not(using else if ladder)
// #include<stdio.h>
// int main(){
//     // char ch = 'a''e','i','o','u';
//     printf("enter your choice:");
//     char given;
//     scanf("%c",&given);
    
//     switch(given){
//         case 1: (given == 'a'){
//             printf("vowel");
//             break;
//         }
//         case 2: (given == 'e'){
//             printf("vowel");
//             break;
//         }
//         case 3: (given == 'i'){
//             printf("vowel");
//             break;
//         }
//         case 4: (given == 'o'){
//             printf("vowel");
//             break;
//         }
//         case 5: (given == 'u'){
//             printf("vowel");
//             break;
//         } printf("const");
//     }

// }

#include<stdio.h>
int main(){
    
    char ch;
       printf("enter your choice:");
       scanf("%c",&ch);

    // if(ch=='a','e','i','o','u' || ch=='A','E','I','O','U') {
    //     printf("the given char is %c vowel",ch);}
    //     else printf(" the given char is %c constant",ch);
    switch(ch){
        case 1: (ch=='a' || ch=='A')  {
            printf("the given char is %c vowel",ch);} break;
        case 2: (ch=='e' || ch=='E') {
            printf("the given char is %c vowel",ch);} break;
        
    }
return 0;
}
