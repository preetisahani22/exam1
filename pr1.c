#include <stdio.h>

int main() 
{
    int i;
    float marks[5], sum = 0, avg;

    printf(" \n Enter marks");
    for(i = 0; i < 5; i++) 
	{
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5;

    printf(" \n Average = %.2f", avg);

    if(avg >= 90)
        printf(" \n Grade: A");
    else if(avg >= 75)
        printf(" \n Grade: B");
    else if(avg >= 60)
        printf(" \n Grade: C");
    else if(avg >= 40)
        printf(" \n Grade: D");
    else
        printf("  \n Grade: F (Fail)");

    return 0;
}

