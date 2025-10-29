#include<stdio.h>
int main()
{
    int stock=5;
    float cost=2.0;
    int bottlereq;
    float total,amt,change,rem;
    scanf("%d %f",&bottlereq,&amt);
    if(bottlereq>stock)
    {
        printf("No full stock available");
    }
    else if(bottlereq<0)
    {
        printf("Invalid Input");
    }
    else 
    {
        total=bottlereq*cost;
        printf("%.2f",total);
        if(amt==total)
        {
            printf("Take your cola");
        }
        else if(amt>total)
        {
            change=amt-total;
            printf("Take your cola and your change is %.2f",change);
        }
        else
        {
            rem=total-amt;
            printf("Insufficient amount,please insert %.2f",rem);
        }
        return 0;

    }
    return 0;
}
