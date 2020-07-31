#pragma warning(disable: 4996)
#include <stdio.h>

void disp(char *s, int n)
{
    for (int i = 0; i < n; ++i)
        if (s[i]) putchar(s[i]); 
        else break; 
}

int main()
{
    char s[50]; 
    scanf("%s", s); 
    //Strings in C language begin at Position 0, so the 4th character should be s[3]
    disp(s + 3, 7); 
    return 0; 
}
