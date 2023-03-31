#include<stdio.h>
#include "login.h"
struct login m = {"Swastik", "form", "123456"};
int main()
{
    printf("%s\n%s\n%s\n", m.Name, m.Username, m.Password);
    return 0;
}
