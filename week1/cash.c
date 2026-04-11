#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Pitaj korisnika za kusur (mora biti pozitivan broj)
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int coins = 0;

// 2. Izračunaj koliko ide kovanica od 25 (Quarters)
while (cents >= 25)
{
    cents = cents - 25;
    coins++;
}

// 3. Izračunaj koliko ide kovanica od 10 (Dimes)
while (cents >= 10)
{
    cents = cents - 10;
    coins++;
}

// 4. Izračunaj koliko ide kovanica od 5 (Nickels)
while (cents >= 5)
{
    cents = cents - 5;
    coins++;
}

// 5. Izračunaj koliko ide kovanica od 1 (Pennies)
while (cents >= 1)
{
    cents = cents - 1;
    coins++;
}
    
    // 6. Ispiši ukupan broj kovanica
    printf("%i\n", coins);
}
