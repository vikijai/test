#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
if(num%2==0)
{
printf("Even");
}
else if(num<0){
printf("Invalid");
}
else{
printf("Odd");
}

}
