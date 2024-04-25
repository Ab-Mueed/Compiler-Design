// Program to check if a string is a palindrome - using strcmp() and strrev() functions

#include <stdio.h>
#include <string.h>

int main()
{
    char input_string[100], reversed_string[100];

    printf("Enter a string: ");
    gets(input_string);

    strcpy(reversed_string, input_string); // Copying str to rev

    strrev(reversed_string); // Reversing the string rev

    if (strcmp(input_string, reversed_string) == 0) // if str and rev are equal, strcmp() returns 0, else it returns a non-zero value
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");

    return 0;
}