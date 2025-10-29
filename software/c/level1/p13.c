#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age<=0)
    {
        printf("Invalid");
    }
    else if(age<=12)
    {
        printf("Child\nPrice:100");
    }
    else if(age>12 && age<=19)
    {
        printf("Teenagers\nPrice:200");
    }
    else if(age>19 && age<61)
    {
        printf("Adult\nPrice:300");
    }
    else
    {
        printf("Seniors\nPrice:400");
    }
    return 0;
}