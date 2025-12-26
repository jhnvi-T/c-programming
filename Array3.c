#include<stdio.h>
int main()
{
int arr[5]={2,4,8,12,16};
printf("printing array elements: ");
for(int i=0;i<=5;i++)
{
printf("%d  ",arr[i]);
}
printf("\n");
printf("printing the array elementsin reverse: ");
for(int i=4;i>=0;i--)
{
printf("%d  ",arr[i]);
}
return 0;
}
