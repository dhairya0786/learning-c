#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NAME_LENGTH 50

// Define struct
typedef struct
{
    char name[MAX_NAME_LENGTH];
    int vote_count;
} candidate;

// Global variables
candidate candidates[100];
int candidates_count;

// Function prototypes
bool tabulate(char *name);
void winner(void);

// Function 1: Tabulate votes
bool tabulate(char *name)
{
    for (int i = 0; i < candidates_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].vote_count++;
            return true;
        }
    }
    return false;
}

// Function 2: Find and print winner
void winner(void)
{
    int max_votes = 0;
    char *winner_name = "";

    for (int i = 0; i < candidates_count; i++)
    {
        if (candidates[i].vote_count > max_votes)
        {
            max_votes = candidates[i].vote_count;
            winner_name = candidates[i].name;
        }
    }
    
    printf("Winner: %s\n", winner_name);
}

// Main function
int main(void)
{
    // Get the number of candidates
    printf("Number of candidates: ");
    scanf("%d", &candidates_count);
    getchar();
    
    // Initialize vote counts to 0
    for (int i = 0; i < candidates_count; i++)
    {
        candidates[i].vote_count = 0;
    }
    
    // Get candidate names from user
    for (int i = 0; i < candidates_count; i++)
    {
        printf("Candidate %d: ", i + 1);
        fgets(candidates[i].name, MAX_NAME_LENGTH, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = '\0';
    }
    
    // Get the number of voters
    int voter_count;
    printf("Number of voters: ");
    scanf("%d", &voter_count);
    getchar();
    
    // Loop through voters and tabulate their votes
    for (int i = 0; i < voter_count; i++)
    {
        printf("Vote: ");
        char vote[MAX_NAME_LENGTH];
        fgets(vote, MAX_NAME_LENGTH, stdin);
        vote[strcspn(vote, "\n")] = '\0';
        
        // Record the vote
        if (!tabulate(vote))
        {
            printf("Invalid vote.\n");
        }
    }
    
    // Print the winner
    winner();
    
    return 0;
}
