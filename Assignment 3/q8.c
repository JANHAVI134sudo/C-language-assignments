 //Name :- Janhavi
 //Group no :- 1A82
 //Application no :- 116575
 //Academic year :- 2025-26
 //Roll no :- 1025230043
 #include <stdio.h>
#include <math.h>

int main()
 {
    double numbers[5], sum = 0.0, avg, variance = 0.0, std_dev;
    double max, min;
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    avg = sum / 5.0;

    max = min = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    for (i = 0; i < 5; i++) {
        variance += pow(numbers[i] - avg, 2);
    }
    variance /= 5.0;

    std_dev = sqrt(variance);

    printf("\nAverage = %lf\n", avg);
    printf("Maximum = %lf\n", max);
    printf("Minimum = %lf\n", min);
    printf("Standard Deviation = %lf\n", std_dev);

    return 0;
} 
