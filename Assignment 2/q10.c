//Name :- Janhavi
//Group no :- 1A82
//Application no :- 116575
//Academic year :- 2025-26
//Roll No :- 1025230043

#include <stdio.h>
#include<stdlib.h>
int main()
{
	char a[100];
	printf("enter a string value:");
	scanf("%99s",a);
	
	int i=atoi(a);
	double d =atof(a);
	float f=atof(a);
	long l=atol(a);
	printf("original string:%s\n",a);
	printf("integer value:%d\n",i);
	printf("double value:%lf\n",d);
	printf("float value:%f\n",f);
	printf("long value:%ld",l);
	
	return 0;
	
}
