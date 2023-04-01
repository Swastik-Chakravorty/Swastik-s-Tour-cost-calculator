#ifndef LOGIN_DOT_H
#define LOGIN_DOT_H
#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define TXTRED   "\033[0;31m"
#define TXTGRN   "\033[0;32m"
#define TXTYLW   "\033[0;33m"
#define TXTBLU   "\033[0;34m"
#define TXTRST   "\033[0m"

#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct login
{
    char fullName[50];
    char email[50];
    char username[50];
    char password[9];
};

// void userInput(char ch[50])
// {
//     fgets(ch, 50, stdin);
//     ch[strlen(ch) - 1] = 0;

// }

int valid(char password[9])
{
    int checkLower = 0; //Default return false
    int checkUpper = 0;
    int checkNumber = 0;
    int checkSymbol = 0;

    if (strlen(password) > 8 || strlen(password) < 8) //Pasword must be 8 characters long
    {
        return 0;
    }
    for (int i = 0; i < strlen(password); i++) //loop to check uppercase, lowercase, number, symbol
    {
        if (islower(password[i]))
        {
            checkLower = 1;
        }
        if (isupper(password[i]))
        {
            checkUpper = 1;
        }
        if (isdigit(password[i]))
        {
            checkNumber = 1;
        }
        if (ispunct(password[i]))
        {
            checkSymbol = 1;
        }
    }

    //Password is valid only if all the checking are true
    if (checkLower == 1 && checkUpper == 1 && checkNumber == 1 && checkSymbol == 1)
    {
        return 1;
    }

    return 0;
} 

void generateUsername(char email[50], char username[50])
{
    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] == '@'){
            break;
        }
        else {
            username[i] = email[i];
        }
    }
}

void login_input()
{
    int opt;
    struct login user;
    printf(TXTYLW"\nPlease choose your operation:\n");
    printf("1: Signup\n");
    printf("2: Login\n");
    printf("3: Exit\n");

    printf("\nYour choice: "TXTRST);
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:
        printf("Enter your Full Name: ");
        fgets(user.fullName, 50, stdin);
        printf("Enter your email: ");
        fgets(user.email, 50, stdin);
        do
        {
            printf("\nYour password needs at least one uppercase letter, lowercase letter, number and symbol and must be 8 characters long\n");
            printf("Enter your password: ");
            fgets(user.password, 9, stdin);
        } while (valid(user.password) == 0);
        
        break;
    
    default:
        break;
    }

}

#endif