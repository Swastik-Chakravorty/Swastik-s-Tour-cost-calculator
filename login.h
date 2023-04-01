#ifndef LOGIN_DOT_H
#define LOGIN_DOT_H
#include<string.h>

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

#endif