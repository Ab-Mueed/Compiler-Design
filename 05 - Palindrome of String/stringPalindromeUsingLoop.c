// Program to check if a string is a palindrome - using loops

#include <stdio.h>
#include <string.h>

int main()
{
    char input_string[100];
    printf("Enter a string you want to check: ");
    gets(input_string); // Reads the line with spaces

    int string_length = strlen(input_string);
    int start_index = 0;               // iterating from the start
    int end_index = string_length - 1; // iterating from the end
    int is_palindrome = 1;             // Intially we consider the input Number as a Palindrome by Default

    while (start_index < end_index)
    {
        if (input_string[start_index] != input_string[end_index])
        {
            is_palindrome = 0;
            break;
        }
        start_index++;
        end_index--;
    }

    if (is_palindrome)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }

    return 0;
}