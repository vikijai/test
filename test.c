#include<stdio.h>
int main()
{
int num;
scanf("%d ",&num);
if(num==0)
{
printf("Zero");
}
else if(num%2==0){
printf("Positive");
}
else
{
printf("Negative");
}
}
