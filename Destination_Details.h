#ifndef DESTINATION_DETAILS_DOT_H
#define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>
#include <windows.h>

struct tour
{
    char source[30];
    char destination[30];
    char sightseeing[30];
    char hotel[30];
    char room[30];
    char food[30];
    char mode[30];
};

void hot_foo_mode(struct tour usr2)
{
    system("cls");
    char hotel[3][30] = {"Bed and Breakfast/Inn", "Budget Hotel", "Luxury Hotel"};
    char room[3][30] = {"Standard room", "Luxury room", "Dormitory"};
    char foof[3][30] = {"Bistro", "Fine Dining", "Fine Dining"};
    printf("\n\nPlaese choose your Hotel type \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s", (i + 1), hotel[i]);
        if (i != 2)
        {
            printf("                ");
        }
    }
    printf("\n\n");

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Hotel type: ");
        gets(usr2.hotel);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(hotel[l], usr2.hotel) == 0)
            {
                printf("%s\n", hotel[l]);
                printf("%s\n", usr2.hotel);
                printf("Mached\n");
                printf("%s\n", usr2.source);
                printf("%s\n", usr2.destination);
                printf("You Choose: %s\n", usr2.hotel);
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

void sightseeing(struct tour usr1)
{
    hot_foo_mode(usr1);
}

void destinations(char dst[12][30], struct tour usr)
{
    system("cls");
    int a = 0;
    printf("\n\nPlaese choose your Destination Station \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = a; j < a + 4; j++)
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
        a += 4;
        printf("\n");
    }

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Destination Station: ");
        gets(usr.destination);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(dst[l], usr.destination) == 0)
            {
                printf("%s\n", dst[l]);
                printf("%s\n", usr.destination);
                printf("Mached\n");
                printf("%s\n", usr.source);
                printf("You Choose: %s\n", usr.destination);
                x = 1;
                sightseeing(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}

void travel()
// int main()
{
    system("cls");
    int a = 0;
    struct tour user;

    char src_stn[12][30] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Boulder", "Virginia"};
    char dst_stn[12][30] = {"New York City", "Los Angeles", "Chicago", "Sedona and the Grand Canyon", "Las Vegas", "San Francisco", "New Orleans", "Asheville, North Carolina", "Hawaii", "Big Sur", "Florida", "Washington, D.C."};

    printf("\n\nPlaese choose your Source Station \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
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
    fgetc(stdin);

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\nYour Source Station: ");
        gets(user.source);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(src_stn[l], user.source) == 0)
            {
                printf("You Choose: %s\n", user.source);
                x = 1;
                destinations(dst_stn, user);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}

#endif