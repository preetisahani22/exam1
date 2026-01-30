#include <stdio.h>

float average(int a[10][10], int r, int c)
   {
    int i, j;
    float sum = 0;

    for(i = 0; i < r; i++)
    
        for(j = 0; j < c; j++)
            sum += a[i][j];

    return sum / (r * c);
   }

int main()

 {
    int i, j, r, c, a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf(" \n Enter elements:");
    for(i = 0; i < r; i++)
    
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf(" \n Average = %.2f", average(a, r, c));

    return 0;
}

