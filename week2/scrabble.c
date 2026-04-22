#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet (A-Z)
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Compare scores and print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;

    // Iterate through the word character by character
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Handle uppercase letters
        if (isupper(word[i]))
        {
            // Subtract 'A' (65) to get the correct index (0-25)
            score += POINTS[word[i] - 'A'];
        }
        // Handle lowercase letters
        else if (islower(word[i]))
        {
            // Subtract 'a' (97) to get the correct index (0-25)
            score += POINTS[word[i] - 'a'];
        }
        // Non-alphabetic characters (numbers, symbols) count as 0 points
    }

    return score;
}