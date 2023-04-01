#include <stdio.h>
#include "login.h"

int main()
{
    printf(TXTGRN "\e[1m\n\t\t--------------WELCOME TO SWASTIK'S TOUR COST CALCULATOR------------\n\e[m" TXTRST);

    login_input();

    return 0;
}
