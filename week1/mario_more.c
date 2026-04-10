#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //Tražimo od korisnika visinu - na primer od 1 do 8
    do
    {
        n = get_int("Height (between 1 and 8): ");
    }
    while (n < 1 || n > 8);
 
    // Spoljašnja petlja za redove
    for (int i = 0; i < n; i++)
    {
        // Unutrašnja petlja za razmake - LEVO
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // Unutrašnja petlja za tarabe - LEVO
        for (int k = 0; k <= i; k++)
        {  
            printf("#");
        }

        // 3. SREDINA: Dva fiksna razmaka
        printf("  ");

        // 4. DESNA STRANA: Tarabe (iste su kao na levoj!)
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        // Na kraju sprata - novi red
            printf("\n");
    }
}