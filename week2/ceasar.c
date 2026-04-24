#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // 1. Provera komandne linije - tačno jedan argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    // 2. Provera da li je ključ pozitivan ceo broj
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    
    // 3. Konverzija string ključa u int
    int key = atoi(argv[1]);
    
    // 4. Dobijanje teksta od korisnika
    string plaintext = get_string("plaintext: ");
    
    // 5. Šifrovanje i ispis
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char rotated = rotate(plaintext[i], key);
        printf("%c", rotated);
    }
    printf("\n");
    
    return 0;
}

// Funkcija koja rotira jedno slovo za ključ
char rotate(char c, int key)
{
    // Ako nije slovo, vrati ga nepromenjenog
    if (!isalpha(c))
    {
        return c;
    }
    
    // Odredi bazu ('A' za velika, 'a' za mala slova)
    char base = isupper(c) ? 'A' : 'a';
    
    // Formula za rotaciju:
    // 1. Pretvori slovo u broj (0-25)
    // 2. Dodaj ključ
    // 3. Modulo 26 (vraća se u opseg 0-25)
    // 4. Vrati u ASCII vrednost
    return (c - base + key) % 26 + base;
}