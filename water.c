#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int min=get_int("Minutes: ");
    int bottles=min*10;
    printf("Bottles: %d\n",bottles);
}