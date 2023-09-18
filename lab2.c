#include <stdio.h>

int main()
{
    int arr[50];
    int i;

    for (i = 0; i < 50; i = i + 1)
    {
        int digit = i % 10 + 1;
        arr[i] = digit;
        printf("%d ", arr[i]);
    }
    return 0;
}