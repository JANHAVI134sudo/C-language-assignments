//Name :- Janhavi
//Group No :- 1A82
//Application no :- 116575 
//Academic year :- 2025-26 ODD
//Roll no :- 1025230043

#include <stdio.h>
int main()
 {
    int num, i;
    int even = 0;

    printf("Enter 20 integers:\n");

    for (i = 1; i <= 20; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even++;
        }
    }

    printf("Number of even integers = %d\n", even);

    return 0;
}


















