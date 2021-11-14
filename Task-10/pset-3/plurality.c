#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
int search (string name, int len);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    int s = search (name, candidate_count);

    if (s != -1) {

        candidates[s].votes ++;
        return true;

    }
    else

        return false;
}

int search (string name, int len) {

    int p1 = 0, p2 = len - 1, index, index_copy = -1;

    while (1) {

        index = p1 + (((p2 - p1) + 1) / 2);
        int check = strcmp (name, candidates[index].name);

        if (check < 0) {

            if (index - 1 != -1)
                p2 = index - 1;

            else
                p1 = index;

        }

        else if (check > 0) {

            if (index + 1 != len)
                p1 = index + 1;

            else
                p1 = index;
        }

        else {

            return index;
            break;

        }

        if (index != index_copy)

            index_copy = index;

        else

            return -1;
    }
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int max = 0, i, j = 0, arr[candidate_count][2];

    for (i = 0; i < candidate_count; i ++) {

        if (max <= candidates[i].votes) {

            max = candidates[i].votes;
            arr[j][0] = i;
            arr[j][1] = max;
            j++;

        }
    }

    for (i = j - 1; arr[i][1] == max && i >= 0; i--) {

        printf ("%s\n", candidates[arr[i][0]].name);

    }

    return;
}

