#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    do
    {
         printf("Height: ");
         scanf("%d",&height);
    }
    while(height<0 || height>23);

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<height*2+2;j++)
        {
            if(j>=height-1-i && j<= height+2+i)
            {
                if(j>=height && j<=height+1 )
                    printf(" ");
                else
                    printf("#");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}