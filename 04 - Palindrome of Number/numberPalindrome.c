// Program to check if a number is a palindrome
// 30th November 2023

#include <stdio.h>

int main()
{
    int original_number, remainder, reversed_number = 0, copy_of_original;

    printf("Enter a number: ");
    scanf("%d", &original_number);

    copy_of_original = original_number; // Preserve the original number before it's modified

    // Reverse the number
    while (original_number != 0)
    {
        remainder = original_number % 10;
        original_number = original_number / 10;
        reversed_number = reversed_number * 10 + remainder;
    }

    printf("Reverse of %d is %d\n", copy_of_original, reversed_number);

    // Check if the number is a palindrome
    if (reversed_number == copy_of_original)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
