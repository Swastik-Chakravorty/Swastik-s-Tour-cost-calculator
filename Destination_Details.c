// #ifndef DESTINATION_DETAILS_DOT_H
// #define DESTINATION_DETAILS_DOT_H
#include <stdio.h>
#include <string.h>

// void travel(){
    int main(){
    int k = 0;
    char src_stn[12][15] = {"New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Boulder", "Virginia"};
    char dst_stn[12][30] = {"New York City", "Los Angeles", "Chicago", "Washington, D.C.", "Las Vegas", "San Francisco", "New Orleans", "Asheville, North Carolina", "Hawaii", "Sedona and the Grand Canyon", "Florida", "Big Sur"};
    
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
    // char usrName[50], pWord[9], pwd2;
    // printf(TXTYLW "\nPlease choose your operation:\n");
    // printf("1: Signup\n");
    // printf("2: Login\n");
    // printf("3: Exit\n");

    // printf("\nYour choice: " TXTRST);
    // scanf("%d", &opt);
    // fgetc(stdin);
}

// #endif