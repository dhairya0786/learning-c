#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to calculate the score of a word
int compute_score(char word[], int points[])
{
    int score = 0;
    
    // Loop through each letter in the word
    for (int i = 0; word[i] != '\0'; i++)
    {
        char letter = toupper(word[i]);  // Convert to uppercase
        
        if (letter >= 'A' && letter <= 'Z')  // Check if it's a letter
        {
            int index = letter - 'A';  // Convert letter to 0-25
            score = score + points[index];
        }
    }
    
    return score;
}

int main() {
    // Declare an array to hold the point values for each letter
    int points[26] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10 };
   char word1[100];
   char word2[100];
       printf("player 1: ");
       scanf("%s", word1); // Read the input word

       printf("player 2: ");
         scanf("%s", word2); // Read the input word

    // Calculate the scores for both words
    int score1 = compute_score(word1, points);
    int score2 = compute_score(word2, points);

    // Compare the scores and declare the winner
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } else if (score1 < score2) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
