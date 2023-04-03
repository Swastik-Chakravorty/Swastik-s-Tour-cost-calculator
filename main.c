#include <stdio.h>
#include <string.h>
#include "Login.h"
// #include "Destination_Details.h"
// #include "Travel_Mode.h"
// #include "Tour_Details.h"

int main()
{
    printf(TXTGRN "\e[1m\n\t\t--------------WELCOME TO SWASTIK'S TOUR COST CALCULATOR------------\n\e[m" TXTRST);

    // int a;
    // a = 
    // login_input();
    // if (a ==  1)
    // {
    //     travel();
    // }
    
    char exam1[5][10] = {"aa aaa", "bb bbb", "cc ccc", "dd ddd", "ee eee"};
    char exam2[10] = {"cc ccc"};
    for (int q = 0; q < 5; q++)
    {
        if (strcmp(exam1[q], exam2) == 0)
        {
            printf("%s\n", exam1[q]);
            printf("%s\n", exam2);
            printf("found");
            break;
        }
        // else{
        //     printf("%s\n", exam1[q]);
        //     printf("%s\n", exam2);
        //     printf("not found\n");

        // }
    }

    return 0;
}
