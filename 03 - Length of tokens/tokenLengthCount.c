#include <stdio.h>
#include <stdbool.h>

int main()
{
    char current_char;
    int token_count = 0, token_length = 0;
    bool is_space = true;

    printf("Enter a sentence: ");

    while ((current_char = getchar()) != '\n') // Read the characters until a new line is found
    {
        if (current_char == ' ') // If the character is a space
        {
            if (!is_space) // End of a token
            {
                token_count++; // Increment the word count
                printf("Length of token %d: %d\n", token_count, token_length);
                token_length = 0; // Reset the length for the next token
            }
            is_space = true;
        }
        else // If the character is not a space
        {
            token_length++; // Increment the length of the current token
            is_space = false;
        }
    }

    if (!is_space) // If the last character is not a space, count the last word
    {
        token_count++;
        printf("Length of token %d: %d\n", token_count, token_length);
    }

    printf("Number of tokens: %d\n", token_count);

    return 0;
}
