#include<stdio.h>
int main()
{
    int L,W;
    scanf("%d %d",&L,&W);
    if(L==W)
    {
        int A=L*L;
        printf("Shape:Square\n");
        printf("Area:%d",A);
    }
    else if(L!=W)
    {
        int B=L*W;
        printf("Shape:Rectangle\n");
        printf("Area:%d",B);
    }
    else
    {
        printf("Shape:Invalid\n");
        printf("Area:Invalid");
    }
    return 0;
}