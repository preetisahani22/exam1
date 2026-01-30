#include <stdio.h>

void printOdd(int a[], int n) 
{
    int i;
    printf(" \n Odd elements:");
    
    for(i = 0; i < n; i++)
	 {
        if(a[i] % 2 != 0)
        
            printf("%d ", a[i]);
     }
}

int main()
 {
    int n, i, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf(" \n Enter elements:");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printOdd(a, n);

    return 0;
}

