#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 8

int main() 
{
    char ch;
    char s[MAX_LEN] ={0};
    char sen[MAX_LEN * 100] ={0};
    
    scanf("%c", &ch);
    scanf("%s", s);
    printf("%c\n", ch);
    printf("%s\n", s);

    /* Accepting string with space */
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);

    return 0;
}
