#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for "height"
    int height;
    do
    {
        height = get_int("Height: ");
    }
    // Inlude only numbers 1 - 8
    while (height < 1 || height > 8);

    // Draw right angle half pyramid
    // Create row
    for (int row = 0; row < height; row++)
    {
        // Create column
        for (int column = 0; column < height; column++)
        {
            if (height > row + column + 1)
            {
                // Print spaces
                printf(" ");
            }
            else
            {
                // Print hashes
                printf("#");
            }
        }
        // Make constant space
        printf("  ");

        // Draw left angle half pyramid

        for (int column = 0; column < height; column++)
        {
            if (height <= row + column + 1)
            {
                printf("#");
            }
        }
        // Print new line
        printf("\n");
    }
}