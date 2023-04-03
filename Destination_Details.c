// #ifndef DESTINATION_DETAILS_DOT_H
// #define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>

struct tour
{
    char source[50];
    char destination[50];
    char mode[10];
    char sightseeing[50];
};

void destinations(char dst[12][50], struct tour usr){
    for (int i = 0; i < 12; i++)
    {
        int y = 0;
        printf("\n\nYour Destination Station: ");
        gets(usr.destination);

        for (int j = 0; j < 12; j++)
        {
            if (strcmp(dst[j], usr.destination) == 0)
            {
                printf("%s\n", dst[j]);
                printf("%s\n", usr.destination);
                printf("Mached\n");
                printf("You Choose: %s\n", usr.destination);
                y = 1;
                break;
            }
        }

        if (y == 1)
        {
            break;
        }
    }
}

// void travel(){
int main()
{
    int k = 0;
    struct tour user;

    char src_stn[12][50] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Boulder", "Virginia"};
    char dst_stn[12][50] = {"New York City", "Los Angeles", "Chicago", "Washington, D.C.", "Las Vegas", "San Francisco", "New Orleans", "Asheville, North Carolina", "Hawaii", "Sedona and the Grand Canyon", "Florida", "Big Sur"};

    printf("\n\nPlaese choose your Source Station (** You will have only 12 chances - Please write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = k; j < k + 4; j++)
        {
            printf("%d: %s", (j + 1), src_stn[j]);
            printf("               ");
            if (j == 4)
            {
                printf(" ");
            }
            else if (j == 5)
            {
                printf("\b");
            }
            else if (j == 6)
            {
                printf("\b\b\b\b");
            }
            else if (j == 8)
            {
                printf("  ");
            }
            else if (j == 9)
            {
                printf("  ");
            }
            else if (j == 10)
            {
                printf("\b");
            }
        }
        k += 4;
        printf("\n");
    }

    for (int l = 0; l < 12; l++)
    {
        int x = 0;
        printf("\nYour Source Station: ");
        gets(user.source);

        for (int m = 0; m < 12; m++)
        {
            if (strcmp(src_stn[m], user.source) == 0)
            {
                // printf("%s\n", src_stn[m]);
                // printf("%s\n", user.source);
                // printf("Mached\n");
                printf("You Choose: %s\n", user.source);
                destinations(dst_stn, user);

                x = 1;
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}

// #endif