#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = number; i >= 1; i--)
    {
        printf("%d\n", 2 * i);
    }
    return 0;
}