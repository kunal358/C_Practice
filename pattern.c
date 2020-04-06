#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i=0, j=0, tmpNum = 0;
    int n;
    scanf("%d", &n);

  	// Complete the code to print the pattern.
    for (i=0; i<=(n-1); i++)
    {
        j = 0;
        tmpNum = n - j;
        while (i>j)
        {
            tmpNum = n-j;
            printf("%d ", tmpNum);
            j++;
        }
        tmpNum = n - j;
        printf("%d ", tmpNum);

        while(((n*2 -2) - j) > i)
        {
            printf("%d ", tmpNum);
            j++;
        }
        while (j < (n*2 -2))
        {
            printf("%d ", ++tmpNum);
            j++;
        }
        printf("\n");
    }

    for (i=0; i<n-1; i++)
    {
        j = 0;
        tmpNum = n - j;
        
        while (j < (n-1 - i))
        {
            printf("%d ", tmpNum--);
            j++;
        }
        int k=0;
        tmpNum++;
        while (k <= i)
        {
            printf("%d ", tmpNum);
            k++;
        }
        k=0;
        while (k < i)
        {
            printf("%d ", tmpNum);
            k++;
        }
        j = 0;
        while (j < (n -1 -i))
        {
            printf("%d ", tmpNum++);
            j++;
        }   
        printf("\n");
    }
    return 0;
}
