#include <stdio.h>
int main()
{
    int no, remainder, sum = 0;
    printf("Enter three digit number");
    scanf("%d", &no);
    while (no != 0)
    {
        /* code */
        remainder = no % 10;
        no = no / 10;
        sum += remainder;
    }
    printf("Sum of the three digit number is %d", sum);

    // improved code // save one variable space
    while (no != 0)
    {
        sum += no % 10;
        no /= 10;
    }
    printf("\n");
    printf("Sum of the three digit number is %d", sum);

    return 0;
}