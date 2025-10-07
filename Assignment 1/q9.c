//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043

#include<stdio.h>
int main()
{  
    float principal;
    printf("enter a principal amount:");
    scanf("%f",&principal);
    
    float rate;
    printf("enter rate of interest:");
     scanf("%f",&rate);
     
    float time;
    printf("enter time:");
     scanf("%f",&time);
     
    printf("%f",principal*rate*time/100);
	   return 0;
    
}
