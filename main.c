#include <stdio.h>
#include "Login.h"
#include "Destination_Details.h"

int main()
{
    printf(TXTGRN "\e[1m\n\t\t--------------WELCOME TO SWASTIK'S TOUR COST CALCULATOR------------\n\e[m" TXTRST);

    login_input();
    work();

    return 0;
}
