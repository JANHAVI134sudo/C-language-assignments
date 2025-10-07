#include <stdio.h>
int main()
 {
    int num;
    long long sum = 0; 

    printf("Enter numbers (enter 999 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 999) {
            break; 
        }
        

        sum += num;
    }

    printf("\nThe sum of all entered numbers (excluding -999) is: %lld\n", sum);

    return 0;
}
