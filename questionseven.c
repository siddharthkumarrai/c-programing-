// (a) To find the number of lines in a text file :

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[100];
    int lines = 0;
    char ch;

    printf("Enter the name of the file: ");
    scanf("%99s", filename); // include space for the null terminator character

    file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        printf("errno: %d\n", errno);
        if (errno == ENOENT)
        {
            printf("The file was not found\n");
        }
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }
    fclose(file);
    printf("The number of lines in the file is %d\n", lines);
    return 0;
}

// (b) To delete specific line from a text file

// #include <stdio.h>
//     int main()
// {
//     FILE *sourceFile, *tempFile;
//     char sourceFilename[100], tempFilename[100];
//     char line[1000];
//     int lineToDelete, currentLine = 1;

//     printf("Enter the name of the source file:");
//     scanf("s", sourceFilename);

//     printf("Enter the line number to delete:");
//     scanf("%d", &lineToDelete);

//     sourceFile = fopen(sourceFilename, "r");
//     if (sourceFile == NULL)
//     {
//         printf("Error opening the source file.\n");
//         return 1;
//     }

//     tempFile = fopen("temp.txt", "w");
//     if (tempFile == NULL)
//     {
//         printf("Error creating the temp file.\n");
//         fclose(sourceFile);
//         return 1;
//     }
//     while (fgets(line, sizeof(line), sourceFile))
//     {
//         if (currentLine != lineToDelete)
//         {
//             fputs(line, tempFile);
//         }
//         currentLine++;
//     }
//     fclose(sourceFile);
//     fclose(tempFile);

//     remove(sourceFilename);
//     rename("temp.txt", sourceFilename);

//     printf("The line number %d has been deleted from the file \n", lineToDelete);
//     return 0;
// }

// (c) To copy a file to another folder with a different fie-name

// #include <stdio.h>
// int main()
// {
//     FILE *sourceFile, *destinationFile;
//     char sourceFilename[100], destinationFilename[100];
//     char ch;
//     printf("Enter the name of the source file:");
//     scanf("%s", sourceFilename);

//     printf("Enter the name of the destination file:");
//     scanf("%s", destinationFilename);

//     sourceFile = fopen(sourceFilename, "r");
//     if (sourceFile == NULL)
//     {
//         printf("Error opening the source file.\n");
//         return 1;
//     }
//     destinationFile = fopen(destinationFilename, "w");
//     if (destinationFile == NULL)
//     {
//         printf("Error opening the destination file.\n");
//         fclose(sourceFile);
//         return 1;
//     }
//     while ((ch = fgetc(sourceFile)) != EOF)
//     {
//         fputc(ch, destinationFile);
//     }
//     fclose(sourceFile);
//     fclose(destinationFile);
//     printf("The file has been copied successfullyto %s.\n");
//     return 0;
// }