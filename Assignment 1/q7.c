//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043

#include <stdio.h>
#include <math.h>
int main() 
{
    double number, result;
    int n;

    printf("Enter the number: ");
    scanf("%lf", &number);

    printf("Enter the value of n (for nth root): ");
    scanf("%d", &n);

    result = pow(number, 1.0 / n);

    printf("The %dth root of %lf is: %lf\n", n, number, result);

    return 0;
}

