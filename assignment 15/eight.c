#include <stdio.h>
void unique_elements(int[], int);
int main()
{
    int arr[] = {1, 0, 2, 2, 4,5,5,8,9,1,5,1,54,6};
    int size = sizeof(arr) / 4;
    unique_elements(arr, size);
    return 0;
}
void unique_elements(int arr[], int size)
{
    int unique;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != unique)
        {
            printf("%d ", arr[i]);
            unique = arr[i];
        }
    }
}