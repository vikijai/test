#include<stdio.h>
int main()
{
int year;
scanf("%d",&year);
if((year%400==0)||(year%4==0))
{
printf("yes");
}
else
{
printf("no");
}
}
