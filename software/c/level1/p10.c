#include<stdio.h>
int main()
{
    float time,rate;
    int step;
    scanf("%d %f",&step,&time);
    if(step<=0 || time<=0)
    {
        printf("Invalid input");
        return 0;
    }
    rate=step/time;
    printf("Avg steps:%.2f\n",rate);
    if(rate<50)
    {
        printf("Fitness level:Low");
    }
    else if(rate>=50 && rate<=100)
    {
        printf("Fitness level:Moderate");
    }
    else
    {
        printf("Fitness level:High");
    }
    return 0;
}