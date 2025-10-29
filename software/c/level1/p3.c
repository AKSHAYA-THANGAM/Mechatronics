#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A<=0 || B<=0 || C<=0)
    {
        printf("invalid triangle");
        return 0;
    }
    if((A+B+C)==180)
    {
        printf("valid triangle");
    }
    else 
    {
        printf("invalid");
    }
    return 0;
}