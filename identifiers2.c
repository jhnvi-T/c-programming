//create an identifier for a function
#include <stdio.h>
int sum(int a, int b) 
{
    return a + b;
}
int main() {
//calling the function
printf("%d", sum(10, 20));
    return 0;
}
