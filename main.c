#include <stdio.h>
#include <string.h>
#include "Login.h"
#include "Destination_Details.h"

int main()
{
    printf(TXTGRN "\e[1m\n\t\t--------------WELCOME TO SWASTIK'S TOUR COST CALCULATOR------------\n\e[m" TXTRST);

    int a;
    a = 
    login_input();
    if (a ==  1)
    {
        travel();
    }


    return 0;
}
