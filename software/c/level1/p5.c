#include<stdio.h>
int main()
{
    float basicsalary,hra,da,gross;
    scanf("%f",&basicsalary);
    if(basicsalary<=0)
    {
        printf("Invalid");
    }
    else if(basicsalary>=10000)
    {
        hra=0.20*basicsalary;
        da=0.80*basicsalary;
    }
    else if(basicsalary<10000 && basicsalary>20000)
    {
        hra=0.25*basicsalary;
        da=0.90*basicsalary;
    }
    else
    {
        hra=0.35*basicsalary;
        da=0.95*basicsalary;
    }
    gross=basicsalary+hra+da;
    printf("Gross salary:%.2f",gross);
    return 0;
}