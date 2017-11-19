#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main(int argc,char* argv[])
{
    if(argc!=2)
    {
        return(1);
    }
    string key=argv[1];
    for(int i=0;i<strlen(key);i++)
    {
        if(!isalpha(key[i]))
            return(1);
    }
    string s=get_string("plaintext: ");
    int index=0;
    printf("ciphertext: ");
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
        {
            int temp=s[i]+(toupper(key[index])-65);
            if(temp>90)
                temp-=26;
            printf("%c",temp);
            index=(index+1)%strlen(key);
        }
        else if(islower(s[i]))
        {
            int temp=s[i]+(toupper(key[index])-65);
            if(temp>122)
                temp-=26;
            printf("%c",temp);
            index=(index+1)%strlen(key);
        }
        else
            printf("%c",s[i]);
    }
    printf("\n");
}