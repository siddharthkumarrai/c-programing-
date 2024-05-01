// (a) To find the length of a given string without using the string library functions:

#include <stdio.h>
int stringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = stringLength(str);
    printf("The length of the string is: %d", length);
    return 0;
}
// (b) To compare two strings without using the string library functions:

// #include <stdio.h>
// int compareStringLength(char str1[], char str2[])
// {
//     int i = 0;
//     while (str1[i] != '\0' || str2[i] != '\0')
//     {
//         if (str1[i] != str2[i])
//         {
//             return str1[i] - str2[i];
//         }
//         i++;
//     }
//     return 0;
// }
// int main()
// {
//     char str1[100];
//     char str2[100];

//     printf("Enter the first string: ");
//     scanf("%s", str1);

//     printf("Enter the second  string: ");
//     scanf("%s", str2);
//     int result = compareStringLength(str1, str2);
//     if (result == 0)
//     {
//         printf("The strings are equal. \n");
//     }
//     else if (result < 0)
//     {
//         printf("The first string is smaller than the second string. \n");
//     }
//     else
//     {
//         printf("The first string is greater than the second string. \n");
//     }
//     return 0;
// }

// (c) To count the total number of vowels and consonants in a string and display the counts seperately:

// #include <stdio.h>
// #include <ctype.h>

// void countVowelsAndConsonants(char str[], int *vowels, int *consonants)
// {
//     *vowels = 0;
//     *consonants = 0;
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         char ch = tolower(str[i]);
//         if (ch >= 'a' && ch <= 'z')
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             {
//                 (*vowels)++;
//             }
//             else
//             {
//                 (*consonants)++;
//             }
//         }
//         i++;
//     }
// }
// int main()
// {
//     char str[100];
//     int vowels, consonants;

//     printf("Enter a string: ");
//     scanf("%s", str);
//     countVowelsAndConsonants(str, &vowels, &consonants);
//     printf("Total vowels: %d\n", vowels);
//     printf("Total consonants: %d\n", consonants);
//     return 0;
// }
