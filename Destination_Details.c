// #ifndef DESTINATION_DETAILS_DOT_H
// #define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>
#include <windows.h>

struct tour
{
    char source[50];
    char destination[50];
    char mode[10];
    char sightseeing[50];
};

void destinations(char dst[12][50], struct tour usr){
    system("cls");
    int b = 0;
    printf("\n\nPlaese choose your Destination Station (** You will have only 12 chances - Please write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = b; j < b + 4; j++)
        {
            printf("%d: %s", (j + 1), dst[j]);
            printf("       ");
            if (j == 4)
            {
                printf("    ");
            }
            else if (j == 5)
            {
                printf("\b\b");
            }
            else if (j == 6)
            {
                printf("\b\b\b\b");
            }
            else if (j == 8)
            {
                printf("      ");
            }
            else if (j == 9)
            {
                printf("   ");
            }
            else if (j == 10)
            {
                printf("\b");
            }
        }
        b += 4;
        printf("\n");
    }

    for (int l = 0; l < 12; l++)
    {
        int y = 0;
        printf("\n\nYour Destination Station: ");
        gets(usr.destination);

        for (int m = 0; m < 12; m++)
        {
            if (strcmp(dst[m], usr.destination) == 0)
            {
                printf("%s\n", dst[m]);
                printf("%s\n", usr.destination);
                printf("Mached\n");
                printf("%s\n", usr.source);
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
    int a = 0;
    struct tour user;

    char src_stn[12][50] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Boulder", "Virginia"};
    char dst_stn[12][50] = {"New York City", "Los Angeles", "Chicago", "Sedona and the Grand Canyon", "Las Vegas", "San Francisco", "New Orleans", "Asheville, North Carolina", "Hawaii", "Big Sur", "Florida", "Washington, D.C."};

    printf("\n\nPlaese choose your Source Station (** You will have only 12 chances - Please write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = a; j < a + 4; j++)
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
                printf(" ");
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
        a += 4;
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