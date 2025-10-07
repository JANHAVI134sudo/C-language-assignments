//Name :- Janhavi
//Group no :- 1A82
//Application no :- 116575
//Academic year :- 2025-26
//Roll No :- 1025230043

#include<stdio.h>
int main()
{ 
    char c1;
    printf("enter a character:");
    scanf("%c",&c1);
    
     if(65<=c1 && c1<=90)
     printf("the character is capital letter");
       else if(97<=c1 && c1<=122)
    printf("the character is small letter");
           else if(48<=c1 && c1<=57)
    printf("the character is digit");
            else
    printf("the character is special symbol");
    return 0;
    
}

