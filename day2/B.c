/*program to implement sample ATM applications
print the following options and perform the user-selected operation
1. Deposit
2. Withdrawal
3. Balance Check
4. PIN change*/ 

#include<stdio.h>
int main(){

    int pin = 1234; 
    int temp;
    int newpin = 2345;
    int enterd_pin = 0;
    float bal = 50000.0;
    double amt =0;
    int ch;
    printf("%f",bal);
    
    printf("enter your choice \n 1 . Dposit\t 2.withdraw \t 3. balance check \t 4.pin change ");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("enter pin");
        scanf("%d",&enterd_pin);
        if(enterd_pin==pin){
            printf("pin valid\n");
            printf("enter amount\n");
            scanf("%lf",&amt);

            if(amt>0){
                bal= bal +amt;
                printf("amount deposits sucessfully:\n current balance is :%f",bal);
            } else printf("check enterd amount");
           
        } else printf("passward invalid");
        break;
        
        case 2:
        printf("enter pin");
        scanf("%d",&enterd_pin);
        if(enterd_pin==pin){
            printf("pin valid");
            printf("enter amount");
            scanf("%lf",&amt);
                if(amt>0){
                bal= bal - amt;

                printf("amount deposits sucessfully:");}
             else printf("check enterd amount");
           
            
        } else printf("passward invalid");
        break;
       
        case 3:
        printf("enter yor pin");
        scanf("%d",&pin);
        if(enterd_pin==pin) 
        printf("%f",&amt);
        else printf("balance not sufficient");
        break;
    
    case 4:  
     printf("old pin is %d", pin);
    printf("enter new passward");
        scanf("%d",&newpin); 
        temp = pin;
        pin = newpin;
        printf("after updated pin is %d",pin);
    }
    return 0;

}
