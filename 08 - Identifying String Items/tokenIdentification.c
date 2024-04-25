// Write a program in C for the given grammar

// ( or {   ->  4
// ) or }   ->  5
// Digit    ->  6
// +        ->  2
// *        ->  3

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isdigit()

// Function to apply grammar rules to the input string
void applyGrammarRules(const char *input, char *output)
{
    // Loop through each character of the input string
    for (int i = 0; input[i] != '\0'; i++)
    {
        // Apply grammar rules based on the current character
        if (input[i] == '(' || input[i] == '{')
        {
            output[i] = '4'; // Rule: '(' or '{' becomes '4'
        }
        else if (input[i] == ')' || input[i] == '}')
        {
            output[i] = '5'; // Rule: ')' or '}' becomes '5'
        }
        else if (isdigit(input[i]))
        {
            output[i] = '6'; // Rule: Digit remains unchanged and becomes '6'
        }
        else if (input[i] == '+')
        {
            output[i] = '2'; // Rule: '+' becomes '2'
        }
        else if (input[i] == '*')
        {
            output[i] = '3'; // Rule: '*' becomes '3'
        }
        else
        {
            output[i] = input[i]; // For other characters, keep them unchanged
        }
    }
    output[strlen(input)] = '\0'; // Null-terminate the output string
}

int main()
{
    char input_string[100];
    char output_string[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin); // Read a string from the user

    // Remove the newline character from the input string
    int index_of_newline = strcspn(input_string, "\n"); // Find the index of the newline character
    input_string[index_of_newline] = '\0';              // Replace the newline character with null character

    // Apply grammar rules to the input string
    applyGrammarRules(input_string, output_string);

    // Output the converted string
    printf("Converted string: %s\n", output_string);

    return 0;
}
