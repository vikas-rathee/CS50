#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main()
{
    string s=get_string();
    for(int i=0;i<strlen(s);i++)
    {
        if(i==0)
            printf("%c",toupper(s[i]));
        else if(s[i-1]==' ')
            printf("%c",toupper(s[i]));
    }
    printf("\n");
}