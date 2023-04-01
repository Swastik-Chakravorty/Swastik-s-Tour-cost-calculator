#ifndef LOGIN_DOT_H
#define LOGIN_DOT_H
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define TXTRED "\033[0;31m"
#define TXTGRN "\033[0;32m"
#define TXTYLW "\033[0;33m"
#define TXTBLU "\033[0;34m"
#define TXTRST "\033[0m"

struct login
{
    char fullName[50];
    char email[50];
    char username[50];
    char password[9];
};

int valid(char password[9])
{
    int checkLower = 0; // Default return false
    int checkUpper = 0;
    int checkNumber = 0;
    int checkSymbol = 0;

    if (strlen(password) > 8 || strlen(password) < 8) // Pasword must be 8 characters long
    {
        return 0;
    }
    for (int i = 0; i < strlen(password); i++) // loop to check uppercase, lowercase, number, symbol
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

    // Password is valid only if all the checking are true
    if (checkLower == 1 && checkUpper == 1 && checkNumber == 1 && checkSymbol == 1)
    {
        return 1;
    }

    return 0;
}

char generateUsername(char email[50], char username[50])
{
    int i = 0;
    while( i < strlen(email))
    {
        if (email[i] == '@')
        {
            break;
        }
        else
        {
            username[i] = email[i];
        }
        i++;
    }
    username[i] = '\0';
}

void astericPass(struct login usr)
{
    FILE *fp;
    char pass2[9];
    int i;
    char pwd;
    do
        {
            printf("\nYour password needs at least one uppercase letter, one lowercase letter, one number and one symbol and must be 8 characters long \n*** Don't press enter / tab / backspace during typing the password***\n");
            printf("\nEnter your password: ");
  
            for (i = 0; i < 10; i++)
            {
                pwd = getch();
                usr.password[i] = pwd;

                if (pwd == 13  || pwd == 9 || pwd == 8)
                {
                    usr.password[i] = '\0';
                    break;
                }
                else
                    printf("*");
            }
            usr.password[i] = '\0';
        } while (valid(usr.password) == 0);

        printf("\nConfirm your password: ");

            for (i = 0; i < 10; i++)
            {
                pwd = getch();
                pass2[i] = pwd;

                if (pwd == 13  || pwd == 9 || pwd == 8)
                {
                    pass2[i] = '\0';
                    break;
                }
                else
                    printf("*");
            }
            pass2[i] = '\0';
        if (strcmp(usr.password, pass2) == 0)
        {
            generateUsername(usr.email, usr.username);
            fp = fopen("Users.dat", "a+"); //"a+" will work as "w", additionally "a+" will set the cursor at the end of the file, so when new information will be added it not overwrite on the earlier information
            fwrite(&usr, sizeof(struct login), 1, fp);
            if (fwrite != 0)
            {
                printf("\n\nRagistration successful. \nYour user name is: %s\n", usr.username);
            }
            else{
                printf("\nSorry! something went wrong :(\n");
            }

        }
        else {
            printf("\nPlease enter the correct password\n");
        }
}

void login_input()
{
    int opt;
    struct login user;
    user.username[0] = '\0';
    user.email[0] = '\0';
    user.password[0] = '\0';
    user.fullName[0] = '\0';
    printf(TXTYLW "\nPlease choose your operation:\n");
    printf("1: Signup\n");
    printf("2: Login\n");
    printf("3: Exit\n");

    printf("\nYour choice: " TXTRST);
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:
        printf("\nEnter your Full Name: ");
        fgets(user.fullName, 50, stdin);
        printf("\nEnter your email: ");
        fgets(user.email, 50, stdin);
        astericPass(user);

        break;

    case 2:

        break;

    default:
        break;
    }
}

#endif