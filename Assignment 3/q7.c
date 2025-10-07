//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043

#include<stdio.h>
int main() {
    int days;

    printf("enter no of days of late:");
    scanf("%d",&days);
    
     if (days <= 0){
	  
     printf("No fine\n");
}
    else if (days <= 5) {
	float fine;
    fine = days * 0.50; 
    printf("Fine = Rs %lf\n", fine);
}
    else if (days <= 10) {
	
    fine = days * 1.0;   
    printf("Fine = Rs %lf\n", fine);
}
    else if (days <= 30) {
	
    fine = days * 5.0;   
    printf("Fine = Rs %lf\n", fine);
}
    else {
	
    printf("Membership Cancelled!!!!\n");
}
    return 0;
}
