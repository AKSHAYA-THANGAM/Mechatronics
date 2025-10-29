#include<stdio.h>
int main()
{
    int C,T;
    scanf("%d %d",&C,&T);
    if(C<=0)
    {
        printf("Invalid Credit Amount");
    }
    else if(T<=0)
    {
        printf("Invalid Transaction Amount");
    }
    else if(C>=T)
    {
        printf("Transaction Approved");
    }
    else
    {
        printf("Transaction Declined");
    }
    return 0;
}