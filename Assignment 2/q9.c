//Name :- Janhavi
//Group no :- 1A82
//Application no :- 116575
//Academic year :- 2025-26
//Roll No :- 1025230043

#include <stdio.h>
int main() 
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    
    
	if(num2==0){
    printf("division is not possible");
   } else {
	float result;
	result=(double)num1/num2;
    
    printf("the result of %d/%d=%lf",num1,num2,result );
}
    return 0;
}
