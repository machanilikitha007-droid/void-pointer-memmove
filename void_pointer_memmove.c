#include <stdio.h>
#include <string.h>

int main()
{
    int source[] = {10, 20, 30, 40, 50};
    int destination[5];

    void *sourcePtr = source;
    void *destinationPtr = destination;

    memmove(destinationPtr, sourcePtr, sizeof(source));

    printf("Source array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", source[i]);
    }

    printf("\nDestination array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", destination[i]);
    }

    printf("\n");

    return 0;
}
