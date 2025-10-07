//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043 

#include<stdio.h>
#include<math.h>
int main()
{ 
    float basic,da,ta,gross_salary;
    printf("enter the basic salary:");
    scanf("%f",&basic);
    
    da=0.10*basic;
    ta=0.12*basic;
    gross_salary=basic+da+ta;
    
    printf("basic salary = %f\n",basic);
    printf("da(10%of basic)=%f\n",da);
    printf("ta(12%of basic)=%f\n",ta);
    printf("gross_salary=%f\n",gross_salary);
    return 0;
    
}
