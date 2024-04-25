// Program to identify White Spaces in a sentence

#include <stdio.h>

int main()
{
    char currentCharacter;
    int spaceCount = 0;

    printf("Enter a Sentence: ");

    while ((currentCharacter = getchar()) != '\n')
    {
        if (currentCharacter == ' ')
        {
            spaceCount++;
        }
    }

    printf("Number of white spaces: %d\n", spaceCount);

    return 0;
}