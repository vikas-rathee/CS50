#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main(int argc,string argv[])
{
    if(argc!=2)
    {
        return 1;
    }
    int k=atoi(argv[1]);
    k%=26;
    string s=get_string("plaintext: ");
    printf("ciphertext: ");
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
        {
            int temp=s[i]+k;
            if(temp>90)
                temp=temp-26;
            printf("%c",temp);
        }
        if(islower(s[i]))
        {
            int temp=s[i]+k;
            if(temp>122)
                temp=temp-26;
            printf("%c",temp);
        }
    }
    printf("\n");
}