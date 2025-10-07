//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043

#include <stdio.h>

int main() {
    int num;
    printf("enter a number");
    scanf("%d",&num);
    
    if(num%5==0 && num%8==0)
    printf("num is divisible by both 5 and 8");
    else 
    printf("num is divisible by 5 but not by 8");
    
    
    return 0;
}
