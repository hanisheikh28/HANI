// write a code to declare user define datatype as student declare the values as name USN and age
#include<stdio.h>
struct Std{
    char name[10];
    char USN[10];
    int age;
};
int main(){
    struct Std s1; //
    printf("enter name of the students:\n");
    scanf("%c",&s1.name); 
    printf("enter USN of the students:\n");
    scanf("%c",&s1.USN); 
    printf("enter age of the students:\n");
    scanf("%d",&s1.age); 

    printf("Name of the student %c\n",s1.name);
    printf("USN of the student %c\n",s1.USN);
    printf("AGE of the student %d\n",s1.age);
}