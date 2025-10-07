//Name :- Janhavi
//Group no :- 1A82
//Application no :- 116575
//Academic year :- 2025-26
//Roll No :- 1025230043

#include<stdio.h>
#include<math.h>
int main() {
    double a,b,c,root1,root2,d;
    printf("enter coefficients a,b,c:");
    scanf("%lf %lf %lf",&a, &b, &c);
    
    d=b*b-4*a*c;
    if(d>=0){
    root1=(-b+sqrt(d))/2*a;
    root2=(-b-sqrt(d))/2*a;
     
     if(d=0)
     printf("roots are real:%lf\n",root1);
     else
     printf("roots are real and distinct:%lf and &lf\n",root1,root2);
 }else{
 	printf("roots do not exist");
 }
    return 0;
}

