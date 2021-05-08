#include <stdio.h>

int main() 
{
    int a=0;
    printf("enter the year");
    scanf("%d",&a);
    if((a%4==0)||((a%100==0)&&(a%400==0)))
    {
        printf("its a leap yeat");
    }
    else
    {
        printf("its not a leap year");
    }
    
}