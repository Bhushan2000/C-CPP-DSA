#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)

        sum += 2 * i - 1;
    printf("%d", sum);
    return 0;
}