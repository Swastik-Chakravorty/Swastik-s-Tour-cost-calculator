#ifndef DESTINATION_DETAILS_DOT_H
#define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>

#include "Boulder.h"
#include "Chicago.h"
#include "Dallas.h"
#include "Houston.h"
#include "Los_Angeles.h"
#include "New_York.h"
#include "Philadelphia.h"
#include "Phoenix.h"
#include "San_Antonio.h"
#include "San_Diego.h"
#include "San_Jose.h"
#include "Virginia.h"

struct tour
{
    char source[30];
    char destination[30];
    char stay[30];
    char hotel[30];
    char room[30];
    char food[30];
    char mode[30];
    char cost[30];
};

void cost(struct tour usr)
{
    if (strcmp(usr.source, "New York") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Los Angeles") == 0)
    {
        printf("\nmatched\n");
    }
    
    else if (strcmp(usr.source, "Chicago") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Houston") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Phoenix") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Philadelphia") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "San Antonio") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "San Diego") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Dallas") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "San Jose") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Boulder") == 0)
    {
        printf("\nmatched\n");
    }

    else if (strcmp(usr.source, "Virginia") == 0)
    {
        printf("\nmatched\n");
    }

}
void mode(struct tour usr)
{
    system("cls");
    char mode[4][30] = {"Car", "Train", "Bus", "Flight"};

    printf("\n\nPlaese choose your Mode of transport \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d: %s", (i + 1), mode[i]);
        if (i != 3)
        {
            printf("             ");
        }
    }
    printf("\n\n");

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Mode oftransport: ");
        gets(usr.mode);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(mode[l], usr.mode) == 0)
            {
                printf("\n\n%s\n", mode[l]);
                printf("%s\n", usr.mode);
                printf("\nMached\n");
                printf("\n\nYour starting place: %s\n", usr.source);
                printf("Your destination place: %s\n", usr.destination);
                printf("%s\n", usr.stay);
                printf("You choose hotel type: %s\n", usr.hotel);
                printf("You choose room type: %s\n", usr.room);
                printf("You choose restaurant type: %s\n", usr.food);
                printf("You choose mode of transport from source to destination: %s\n", usr.mode);
                sleep(1);
                x = 1;
                cost(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}
void food(struct tour usr)
{
    system("cls");
    char food[3][30] = {"Bistro", "Fine Dining", "Family-Style"};

    printf("\n\nPlaese choose your Restaurant type \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s", (i + 1), food[i]);
        if (i != 2)
        {
            printf("                ");
        }
    }
    printf("\n\n");

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Restaurant type: ");
        gets(usr.food);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(food[l], usr.food) == 0)
            {
                printf("You Choose: %s\n", usr.food);
                sleep(1);
                x = 1;
                mode(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}
void room(struct tour usr)
{
    system("cls");
    char room[3][30] = {"Standard Room", "Luxury Room", "Dormitory"};

    printf("\n\nPlaese choose your Room type \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s", (i + 1), room[i]);
        if (i != 2)
        {
            printf("                ");
        }
    }
    printf("\n\n");

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Room type: ");
        gets(usr.room);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(room[l], usr.room) == 0)
            {
                printf("You Choose: %s\n", usr.room);
                sleep(1);
                x = 1;
                food(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
}
void hotel(struct tour usr)
{
    system("cls");
    char hotel[3][30] = {"Bed and Breakfast/Inn", "Budget Hotel", "Luxury Hotel"};

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
        gets(usr.hotel);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(hotel[l], usr.hotel) == 0)
            {
                printf("You Choose: %s\n", usr.hotel);
                sleep(1);
                x = 1;
                room(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }

}

void stay(struct tour usr)
{
    system("cls");
    char stay[3][30] = {"2 Nights / 3 Days", "4 Nights / 5 Days", "6 Nights / 7 Days"};

    printf("\n\nPlaese choose your Staying duration \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s", (i + 1), stay[i]);
        if (i != 2)
        {
            printf("                ");
        }
    }
    printf("\n\n");

    for (int k = 0; k < 12; k++)
    {
        int x = 0;
        printf("\n\nYour Staying duration: ");
        gets(usr.stay);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(stay[l], usr.stay) == 0)
            {
                printf("You Choose: %s\n", usr.stay);
                sleep(1);
                x = 1;
                hotel(usr);
                break;
            }
        }

        if (x == 1)
        {
            break;
        }
    }
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
                printf("You Choose: %s\n", usr.destination);
                sleep(1);
                x = 1;
                stay(usr);
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
                sleep(1);
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