#ifndef LOGIN_DOT_H
#define LOGIN_DOT_H
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

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
            printf(TXTBLU"\nYour password needs at least one uppercase letter, one lowercase letter, one number and one symbol and must be 8 characters long \n*** Don't press enter / tab / backspace during typing the password***\n");
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
                printf("\n\nRagistration successful. \nYour username is: %s\n", usr.username);
            }
            else{
                printf("\nSorry! something went wrong :(\n");
            }
            fclose(fp);

        }
        else {
            printf("\n\n***Please enter the correct password ???\n\n"TXTRST);
            Beep(800, 300);
            astericPass(usr);
        }
}

void login_input()
{
    FILE *fpr;
    int opt, usrFound = 0, i;
    struct login user;
    struct login user2;
    char usrName[50], pWord[9], pwd2;
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
        system("cls");
        user.username[0] = '\0';
        user.email[0] = '\0';
        user.password[0] = '\0';
        user.fullName[0] = '\0';
        printf(TXTBLU"\nEnter your Full Name: ");
        fgets(user.fullName, 50, stdin);
        printf("\nEnter your email: "TXTRST);
        fgets(user.email, 50, stdin);
        astericPass(user);

        break;

    case 2:
        usrName[0] = '\0';
        pWord[0] = '\0';
        printf(TXTGRN"\nEnter your username: ");
        scanf("%s", &usrName);
        printf("\nEnter your password: ");
        for (i = 0; i < 10; i++)
            {
                pwd2 = getch();
                pWord[i] = pwd2;

                if (pwd2 == 13  || pwd2 == 9 || pwd2 == 8)
                {
                    pWord[i] = '\0';
                    break;
                }
                else
                    printf("*");
            }
            pWord[i] = '\0';
        fpr = fopen("Users.dat", "r");
        while (fread(&user2, sizeof(struct login), 1, fpr))
        {
            if (strcmp(user2.username, usrName) == 0){
                if (strcmp(user2.password, pWord) == 0){
                    system("cls");
                    printf("\n\n\tWelcome %s\n", user2.fullName);
                    printf("\n|Full Name: %s\n", user2.fullName);
                    printf("|Email: %s\n", user2.email);
                    printf("|Username: %s\n", user2.username);
                }
                else {
                    printf("\n\nInvalid Username or Password!\n");
                    Beep(800, 300);
                }
                usrFound = 1;
            }
        }
        if (usrFound != 1)
        {
            printf("\n\nUser is not registered!"TXTRST);
        }
        fclose(fpr);
        break;

    case 3:
        printf(TXTRED"\n\nHave a Good Day!\n\n"TXTRST);
        break;
    }
}

#endif