#include <stdio.h>
int swap_values(int *, int *);
int main()
{
    int a = 1, b = 2;
    swap_values(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
int swap_values(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}