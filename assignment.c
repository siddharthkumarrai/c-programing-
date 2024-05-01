#include <stdio.h>

int main()
{

    int choice;
    int num1, num2, num;

    do
    {
        // Display opening menu
        printf("\nMenu:\n");
        printf("1) Check if two integers are equal\n");
        printf("2) Check if a number is even or odd\n");
        printf("3) Check if a number is positive or negative\n");
        printf("4) Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Use SWITCH...CASE to execute corresponding option

        switch (choice)
        {

        case 1:
            printf("Enter the first integer: ");
            scanf("%d", &num1);
            printf("Enter the second integer: ");
            scanf("%d", &num2);

            if (num1 == num2)
                printf("The two integers are equal.\n");
            else
                printf("The two integers are not equal.\n");
            break;

        case 2:
            printf("Enter an integer: ");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("%d is an even number.\n", num);
            else
                printf("%d is an odd number.\n", num);
            break;

        case 3:
            printf("Enter an integer: ");
            scanf("%d", &num);

            if (num > 0)
                printf("%d is a positive number.\n", num);
            else if (num < 0)
                printf("%d is a negative number.\n", num);
            else
                printf("The number is zero.\n");
            break;
        case 4:
            printf("Quitting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    return 0;
}