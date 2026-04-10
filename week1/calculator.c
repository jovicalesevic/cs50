#include <cs50.h>
#include <stdio.h>

int main(void)
{
        int x = get_int("x: ");
        int y = get_int("y: ");

        printf("%i + %i = %i\n", x, y, x + y);
}