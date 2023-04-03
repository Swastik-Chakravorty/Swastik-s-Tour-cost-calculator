// #ifndef DESTINATION_DETAILS_DOT_H
// #define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>


struct tour
{
    char source[50];
    char destination[30];
    char mode[10];
    char sightseeing[50];
};


// void travel(){
    int main(){
    int usr_src, usr_dst;
    int k = 0;
    struct tour user;
    int x = 0;

    char src_stn[12][50] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Boulder", "Virginia"};
    char dst_stn[12][30] = {"New York City", "Los Angeles", "Chicago", "Washington, D.C.", "Las Vegas", "San Francisco", "New Orleans", "Asheville, North Carolina", "Hawaii", "Sedona and the Grand Canyon", "Florida", "Big Sur"};

    printf("\n\nPlaese choose your Source Station (** You will have only 12 chances - Please write the name coorectly as mentioned below**): ");
    printf("\n\n");
    for (int i =0; i < 3; i++)
    {
        for (int j = k; j < k+4; j++)
        {
            printf("%d: %s", (j + 1), src_stn[j]);
            printf("               ");
            if (j == 4){
                printf(" ");
            }
            else if (j == 5){
                printf("\b");
            }
            else if (j == 6){
                printf("\b\b\b\b");
            }
            else if (j == 8){
                printf("  ");
            }
            else if (j == 9){
                printf("  ");
            }
            else if (j == 10){
                printf("\b");
            }
        }
        k += 4;
        printf("\n");
    }

    for (int l = 0; l < 12; l++)
    {
        printf("\nYour Source Station: ");
        gets(user.source);

    for (int l = 0; l < 12; l++)
    {
        if (strcmp(src_stn[l], user.source) == 0){
            printf("%s\n", src_stn[l]);
            printf("%s\n", user.source);
            printf("Mached\n");
            printf("You Choose: %s\n", user.source);
            x = 1;
            break;
        }
    }

    if (x == 1){
        break;
    }

    }
   
}

// #endif