#include<stdio.h>
int main()
{
   float amt;
   scanf("%f",&amt);
   if(amt<=0)
   {
       printf("Invalid");
   }
   else if(amt>50)
   {
       printf("%.2f Shipping fee is $5",amt);
   }
   else
   {
       printf("%.2f Free shipping",amt);
   }
   return 0;
}