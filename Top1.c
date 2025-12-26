#include<stdio.h>
int main()
{
int a=1,b=2,c=3;
if(a>b&&a>c)
{
printf("a is largest:%d",a);
}
else if(b>a&&b>c)
{
printf("b is largest:%d",b);
}
else
{
printf("c is largest:%d",c);
}
return 0;
}
