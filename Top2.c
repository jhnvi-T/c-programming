#include<stdio.h>
int main()
{
int n,i;
printf("enter a number:");
scanf("%d",&n);
for(i=2;i<n;i++)//checks 2 to n-1 
{
if(n%i==0)
{
printf("not prime");
return 0;
}
}
printf("prime");
return 0;
}
