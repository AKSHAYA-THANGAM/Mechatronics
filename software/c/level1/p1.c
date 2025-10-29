#include<stdio.h>
int main()
{
    int C,S,P;
    scanf("%d %d",&C,&S);
    if(C<0 || S<0)
    {
        printf("Error:Cost price cannot be negative");
        return 0;
    }
    P=S-C;
    if(P>0)
    {
        printf("P=%d\n",P);
        printf("Result:Profit");
    }
    else if(P<0)
    {
        printf("P=%d\n",P);
        printf("Result:Loss");
    }
    else{
        printf("P=%d\n",P);
        printf("Result:Break-even");
    }
    return 0;
}
