#include<stdio.h>
int main()
{
    int Q;
    float P,D,A;
    scanf("%f %d",&P,&Q);
    if(P<=0 || Q<0)
    {
        printf("Invalid input");
        return 0;
    }
    int T=P*Q;
    if(T%2==0)
    {
        D=0.10*T;
    }
    else
    {
        D=0.15*T;
    }
    A=T-D;
    printf("%.2f",A);
    return 0;
}