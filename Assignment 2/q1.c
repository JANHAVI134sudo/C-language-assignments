//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043 

#include <stdio.h>
#include <math.h>
int main()
{
	double degree,angle;
	printf("Enter the angle:");
	scanf("%lf",&degree);
	angle = degree *(3.14/180);
	double sine= sin(angle);
	double cosine= cos(angle);
	printf("The sin value of the entered angle is:%lf\n",sine);
	printf("The cos value of the entered angle is:%lf\n",cosine);
	double val,val1;
	printf("Enter the value to find its logarithm:");
	scanf("%lf",&val);
	val1= log(val);
	printf("The log of entered no is:%lf\n",val1);
	double v,p,val2;
	printf("Enter the value:");
	scanf("%lf",&v);
	printf("Enter the power:");
	scanf("%lf",&p);
	val2= pow(v,p);
	printf("The answer will be:%lf\n",val2);
	double b,val3;
	printf("Enter the value to find it's square root:");
	scanf("%lf",&b);
	val3= sqrt(b);
	printf("The sqrt of the entered number is:%lf",val3);
	return 0;
}

