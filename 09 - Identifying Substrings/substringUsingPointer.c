// Check whether a string is a substring of a given parent string using Pointers

#include <stdio.h>
#include <string.h>

int main()
{
    char parent_string[100], substring[100];
    char *parent_ptr, *substring_ptr;
    int parent_index, substring_index;
    int substring_found = 0;

    // Input from user
    printf("Enter the parent string: ");
    gets(parent_string);
    printf("Enter the substring: ");
    gets(substring);

    // Initialize pointers to the beginning of each string
    parent_ptr = parent_string;
    substring_ptr = substring;

    // Loop through each character in the parent string
    for (parent_index = 0; parent_index < strlen(parent_string); parent_index++)
    {
        substring_index = 0; // To iterate through the substring or Reset substring index for each character in the parent string

        // Check if the current character in the parent string matches the first character of the substring
        if (*parent_ptr == *substring_ptr)
        {
            // If there's a match, compare subsequent characters to check if the substring is present
            while (*(substring_ptr + substring_index) != '\0')
            {
                if (*(parent_ptr + substring_index) == *(substring_ptr + substring_index))
                {
                    substring_index++; // Break loop if characters don't match
                }
                else
                {
                    break;
                }
            }

            // If the end of the substring is reached, set flag to indicate substring is found
            if (*(substring_ptr + substring_index) == '\0')
            {
                substring_found = 1;
                break; // Exit loop since substring is found
            }
        }
        parent_ptr++; // Move pointer to the next character in the parent string
    }

    // Output the result based on whether substring is found or not
    if (substring_found == 1)
    {
        printf("The substring is present in the parent string\n");
    }
    else
    {
        printf("The substring is not present in the parent string\n");
    }

    return 0;
}