#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The square of %d is  % d\n ", number, square(number));
    return 0;
}

(b) To find the absolute difference between two integers :

#include <stdio.h>
    int absDifference(int num1, int num2)
{
    return (num1 > num2) ? (num1 - num2) : (num2 - num1);
};

int main()
{
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("The absolute difference between %d and %d d is %d\n", num1, num2, absDifference(num1, num2));
    return 0;
}

(c) To convert a decimal number to its equivalent binary number :
#include <stdio.h>

    void decimalToBinary(int num)
{
    if (num == 0)
    {
        printf("Binary equivalent: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
(d) To find the largest element in a given array of n elements :
#include <stdio.h>

#include <stdio.h>

    int findLargestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = findLargestElement(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}