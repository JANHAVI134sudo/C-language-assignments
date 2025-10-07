//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043 

#include<stdio.h>
#include<math.h>
int main()
{ 
    double principal,rate,time;
    printf("enter a principal value:");
    scanf("%lf",&principal);
    
    printf("enter a rate of interest:");
    scanf("%lf",&rate);
    
     printf("enter a time:");
    scanf("%lf",&time);
    
    printf("%lf",principal*pow((1+rate/100),time)-principal);
    return 0;
    
}
