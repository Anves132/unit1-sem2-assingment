#include <stdio.h>
#include <string.h>

#define MAX 50

// Define structure 
struct cricket
{
    char player_name[30];
    char team_name[30];
    float batting_avg;
};

int main()
{
    struct cricket player[MAX];
    int i, j;
    int n;

    printf("Enter number of players (max 50): ");
    scanf("%d", &n);

    // Read player details 
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of player %d\n", i + 1);

        printf("Player Name: ");
        scanf("%s", player[i].player_name);

        printf("Team Name: ");
        scanf("%s", player[i].team_name);

        printf("Batting Average: ");
        scanf("%f", &player[i].batting_avg);
    }

    // Print team-wise list 
    printf("\n--- Team Wise Player List ---\n");

    for (i = 0; i < n; i++)
    {
        int printed = 0;

        // Check if team already printed 
        for (j = 0; j < i; j++)
        {
            if (strcmp(player[i].team_name, player[j].team_name) == 0)
            {
                printed = 1;
                break;
            }
        }

        if (!printed)
        {
            printf("\nTeam: %s\n", player[i].team_name);
            printf("Player Name\tBatting Average\n");

            for (j = 0; j < n; j++)
            {
                if (strcmp(player[i].team_name, player[j].team_name) == 0)
                {
                    printf("%s\t\t%.2f\n",
                           player[j].player_name,
                           player[j].batting_avg);
                }
            }
        }
    }

    return 0;
}