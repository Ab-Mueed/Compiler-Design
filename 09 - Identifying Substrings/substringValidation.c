#include <stdio.h>
#include <string.h>

// Function to check if subString is present in string
int isSubstringPresent(char *string, char *subString)
{
    int string_length = strlen(string);
    int subString_length = strlen(subString);

    // If Length of substring is hreater than that of Original String, then its not called a substring, hence terminate
    if (subString_length > string_length)
    {
        return 0;
    }

    else
    {
        // Loop through the main string
        for (int i = 0; i <= string_length - subString_length; i++)
        {
            int j;
            // Check if the current position in the main string matches the start of the substring
            for (j = 0; j < subString_length; j++)
            {

                // If characters don't match, break the loop
                if (string[i + j] != subString[j])
                {
                    break;
                }
            }

            // If all characters of the substring match, return 1 (true)
            if (j == subString_length)
            {
                return 1;
            }
        }
    }

    // If substring not found, return 0 (false)
    return 0;
}

int main()
{
    char input_string[100];
    char subString[100];

    // Prompt user to enter the main string
    printf("Enter the string: ");
    gets(input_string);
    // Prompt user to enter the substring
    printf("Enter the substring: ");
    gets(subString);

    // Call function to check if substring is present in main string
    int result = isSubstringPresent(input_string, subString);

    if (result)
    {
        printf("Substring Found");
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}

/*
1) input_string: Represents the main string entered by the user.

2) subString: Represents the substring entered by the user.

3) string_length: Stores the length of the main string.

4) subString_length: Stores the length of the substring.

5) result: Stores the result of the check whether the substring is present in the main string.
*/