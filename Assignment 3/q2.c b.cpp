//Name :- Janhavi
//Group no :- 1A82
//Applicarion no:- 116575
//Academic year:-2025-26
//roll no :- 1025230043
#include <stdio.h>
int main() 
{
    int a, b, c, greatest;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
