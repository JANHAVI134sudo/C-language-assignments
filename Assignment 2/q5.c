//Name :- Janhavi
//Group no :- 1A82
//Application no :- 116575
//Academic year :- 2025-26
//Roll No :- 1025230043 

#include <stdio.h>
int main(){
    int a,b,num;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    
    printf("before swapping: a=%d, b=%d\n",a,b);
    
    num=a;
    a=b;
    b=num;
    printf("after swapping: a=%d,b=%d\n",a,b);
    
    return 0;
}

