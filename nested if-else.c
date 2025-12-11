#include<stdio.h>
int main()
{
    int age=11;
if(age>=18)
{
      if(age>=60)
        {
          printf("eligible to vote senior\n");
        }
       else
        {
          printf("eligible for vote\n");
        }
}
else
{
         printf("not eligible for vote(under 18)\n");
          if(age>=13)
           {
             printf("teenager\n");
          }
         else
        {
          printf("not a teenager\n");
        }
}
}
