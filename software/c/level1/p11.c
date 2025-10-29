#include<stdio.h>
int main()
{
    int m,d,y;
    scanf("%d",&m);
    if(m<1 || m>12)
    {
        printf("Invalid month");
        return 0;
    }
    if(m==1)
    {
        printf("month=Jan\n");
        printf("days=31");
    }
    else if(m==2)
    {
        printf("month=feb\n");
        scanf("%d",&y);
        if(y%400==0 &&(y%4==0 &&y%100!=0))
        {
            printf("days=29\n");
            printf("%d is a leap year",y);
        }
        else 
        {
            printf("days=28\n");
            printf("%d is not a leap year",y);
        }
        return 0;
    }
    else if(m==3)
    {
        printf("month=march\n");
        printf("days=31");
    }
    else if(m==4)
    {
        printf("month=april\n");
        printf("days=30");
    }
    else if(m==5)
    {
        printf("month=may\n");
        printf("days=31");
    }
    else if(m==6)
    {
        printf("month=june\n");
        printf("days=30");
    }
    else if(m==7)
    {
        printf("month=july\n");
        printf("days=31");
    }
    else if(m==8)
    {
        printf("month=aug\n");
        printf("days=31");
    }
    else if(m==9)
    {
        printf("month=sep\n");
        printf("days=30");
    }
    else if(m==10)
    {
        printf("month=oct\n");
        printf("days=31");
    }
    else if(m==11)
    {
        printf("month=nov\n");
        printf("days=30");
    }
    else if(m==12)
    {
        printf("month=dec\n");
        printf("days=31");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}