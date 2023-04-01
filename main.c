#include<stdio.h>
#include "login.h"

int main()
{
    system("color 0e");
    int opt;
    printf("\n\t\t--------------WELCOME TO SWASTIK'S TOUR COST CALCULATOR------------\n");
    printf("\nPlease choose your operation:\n");
    printf("1: Signup\n");
    printf("2: Login\n");
    printf("3: Exit\n");

    printf("\nYour choice: ");
    scanf("%d", &opt);
    fgetc(stdin);



    return 0;
}
