#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int size)
{
    printf("current Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int *insertElement(int arr[], int size, int element)
{
    size++;
    int *newArray = (int *)calloc(size, sizeof(int));

    for (int i = 0; i < size - 1; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size - 1] = element;

    free(arr); // release the memory of the old array
    return newArray;
}

int main()
{
    int *array = NULL;
    int size = 0;
    int element;
    while (1)
    {
        printf("Enter element to insert(enter -1 to stop) ");
        scanf("%d", &element);
        if (element == -1)
        {
            break;
        }
        if (array == NULL)
        {
            array = (int *)malloc(sizeof(int));
        }
        array = insertElement(array, size, element);
        displayArray(array, size);
        size++;
    }
    displayArray(array, size);
    free(array); // release the memory of the final array
    return 0;
}