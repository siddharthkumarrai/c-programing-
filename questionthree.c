// // (a) To count the digits of a given number:
// #include <stdio.h>

// int countDigits(int num)
// {
//     if (num == 0)
//         return 0;
//     return 1 + countDigits(num / 10);
// }
// int main()
// {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("Number of digits :  %d\n ", countDigits(number));
//     return 0;
// }
// (b) To reverse a string:
// #include <stdio.h>

// void reverseString(char str[], int start, int end)
// {
//     if (start >= end)
//         return;
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     reverseString(str, start + 1, end - 1);
// }
// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     reverseString(str, 0, strlen(str) - 1);
//     printf("Reversed string is: %s\n", str);
//     return 0;
// }
// (c) To find the least common multiple of two numbers:
#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("least common multiple: %d\n", lcm(num1, num2));
    return 0;
}