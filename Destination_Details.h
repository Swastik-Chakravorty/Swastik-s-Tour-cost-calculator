#ifndef DESTINATION_DETAILS_DOT_H
#define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>

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
        printf("\n\nYour Hotel type: ");
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
                // printf("%s\n", usr.sightseeing);
                printf("You choose hotel type: %s\n", usr.hotel);
                printf("You choose room type: %s\n", usr.room);
                printf("You choose restaurant type: %s\n", usr.food);
                printf("You choose mode of transport from source to destination: %s\n", usr.mode);
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

void sightseeing(struct tour usr)
{
    system("cls");
    char sight[3][30] = {"To Be added", "To Be added", "To Be added"};

    printf("\n\nPlaese choose your Sightseeing route number \n(** You will have only 12 chances - \nPlease write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %s", (i + 1), sight[i]);
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
        gets(usr.sightseeing);

        for (int l = 0; l < 12; l++)
        {
            if (strcmp(sight[l], usr.sightseeing) == 0)
            {
                printf("You Choose: %s\n", usr.sightseeing);
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