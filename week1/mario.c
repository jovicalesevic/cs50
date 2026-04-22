#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    // We ask the user for height - for example from 1 to 8
    do
    {
        n = get_int("Height (between 1 and 8): ");
    }
    while (n < 1 || n > 8);
 
    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for spaces - LEFT
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // Inner loop for the # - LEFT
        for (int k = 0; k <= i; k++)
        {  
            printf("#");
        }

        // 3. MIDDLE: Two fixed spaces
        printf("  ");

        // 4. RIGHT SIDE: # (same as on the left!)
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        // At the end of the floor - a new row
            printf("\n");
    }
}