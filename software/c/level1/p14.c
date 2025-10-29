#include <stdio.h>
int main() 
{
    int totalChoco, chocoPerDay, days;
    scanf("%d %d %d", &totalChoco, &chocoPerDay, &days);
    int required = chocoPerDay * days;
    if (totalChoco >= required)
    {
        printf("1");  
    } 
    else 
    {
        printf("0\n");
        int minDays = totalChoco / chocoPerDay;
        if (totalChoco % chocoPerDay != 0) 
        {
            minDays++;
        }
        printf("%d", minDays);  
    }

    return 0;
}
