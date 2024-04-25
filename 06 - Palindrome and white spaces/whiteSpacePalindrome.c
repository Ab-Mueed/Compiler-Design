// Write a program that checks if a sentence is a palindrome or not.
// This program ignores the white spaces in the sentence. For example, "ab b a" is a palindrome although it is not a palindrome if we consider the white spaces.

#include <stdio.h>
#include <string.h>

// Function to remove all spaces from a given string
void removeSpaces(char *input_string)
{
    int index_after_removal = 0; // Index for the position after removing spaces
    for (int current_index = 0; input_string[current_index] != '\0'; current_index++)
    {
        if (input_string[current_index] != ' ')
        {
            input_string[index_after_removal++] = input_string[current_index];
        }
    }
    input_string[index_after_removal] = '\0'; // Null-terminate the string
}

int main()
{
    char input_string[100];
    printf("Enter a string you want to check: ");
    gets(input_string); // Reads the line with spaces

    removeSpaces(input_string); // Remove spaces from the string

    int string_length = strlen(input_string);
    int start_index = 0;               // Index for iterating from the start
    int end_index = string_length - 1; // Index for iterating from the end
    int is_palindrome = 0;

    while (start_index < end_index)
    {
        if (input_string[start_index] != input_string[end_index])
        {
            is_palindrome = 1;
            break;
        }
        start_index++;
        end_index--;
    }

    if (is_palindrome == 0)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }

    return 0;
}

/*
1) input_string: Represents the string entered by the user.

2) index_after_removal: Represents the position after removing spaces in the removeSpaces function.

3) string_length: Stores the length of the modified input string after removing spaces.

4) start_index: Represents the index for iterating from the start of the string.

5) end_index: Represents the index for iterating from the end of the string.

6) is_palindrome: Flag indicating whether the string is a palindrome or not.
*/
