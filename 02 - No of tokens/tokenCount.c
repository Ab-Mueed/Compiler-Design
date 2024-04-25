// Program To Count The Number Of Words(Tokens) In A String

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char current_char, previous_char = '\0';
    int token_count = 0;
    bool first_word_found = false, previous_char_is_space = false;

    printf("Enter a sentence: ");

    while ((current_char = getchar()) != '\n') // Read the characters until a new line is found
    {
        if (current_char == ' ') // If the character is a space
        {
            if (previous_char != ' ' && first_word_found) // Check if the previous character was a space and the next character is not a space and a word has been found
            {
                token_count++;
                previous_char_is_space = true;
            }
        }
        else // If the character is not a space
        {
            first_word_found = true;
            previous_char_is_space = false;
        }

        previous_char = current_char;
    }

    // Check if the last word is not followed by a space
    if (first_word_found && !previous_char_is_space)
    {
        token_count++;
    }

    printf("Number of tokens: %d\n", token_count);

    return 0;
}
