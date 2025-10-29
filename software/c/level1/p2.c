#include<stdio.h>
int main()
{
    char name[50];
    float rollno,totalclass,attendedclass,P;
     
    scanf("%s %d %d %d", name,&rollno,&totalclass,&attendedclass);
    if(rollno<0 ||totalclass<0 ||attendedclass<0)
    {
        printf("cannot be a negative number");
        return 0;
    }
    P=(attendedclass/totalclass)*100;
    printf("Attendance percentage:%.2f%%",P);
    return 0;
}