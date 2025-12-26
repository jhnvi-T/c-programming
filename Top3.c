#include <stdio.h>
#include <math.h> 
int main() {
    double P, R, T, A, CI;
    printf("Enter principal amount: ");
    scanf("%lf", &P);
    printf("Enter rate of interest (in %): ");
    scanf("%lf", &R);
    printf("Enter time in years: ");
    scanf("%lf", &T);
    A = P * pow((1 + R / 100), T);
    CI = A - P;
printf("Compound Interest = %.2lf\n", CI);
    printf("Total Amount = %.2lf\n", A);
    return 0;
}
