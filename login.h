#ifndef LOGIN_DOT_H
#define LOGIN_DOT_H
#include<string.h>

#define TXTRED   "\033[0;31m"
#define TXTGRN   "\033[0;32m"
#define TXTYLW   "\033[0;33m"
#define TXTBLU   "\033[0;34m"
#define TXTRST   "\033[0m"

struct login
{
    char fullName[50];
    char email[50];
    char username[50];
    char password[50];
};

void userInput(char ch[50])
{
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;

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

void input()
{
    int opt;
    printf(TXTYLW"\nPlease choose your operation:\n");
    printf("1: Signup\n");
    printf("2: Login\n");
    printf("3: Exit\n");

    printf("\nYour choice: "TXTRST);
    scanf("%d", &opt);
    fgetc(stdin);
}

#endif