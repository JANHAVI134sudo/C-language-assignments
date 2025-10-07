//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043 

#include <stdio.h>
int main()
 {
    int num;

    printf("Enter integers (program stops when a number > 100 is entered):\n");

    while (1) {
        scanf("%d", &num);

        if (num > 100) {
            printf("%d is greater than 100. Program quits!\n", num);
            break;
        }
    }

    return 0;
}









