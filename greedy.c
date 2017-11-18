#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float value;
    printf("O hai! How much change is owed?\n");
    do
    {
        value=get_float();
    }while(value<0.0);

    int val=((int)value/1)*100;
  value=value-(int)value;

   value=ceil(value*100);
   val+=value;
    int quarter=25,dime=10,nickel=5,penny=1,count=0;
    while(val>0)
    {
        while(val>=quarter)
        {
            val-=quarter;
            count++;
        }
        while(val>=dime)
        {
            val-=dime;
            count++;
        }
        while(val>=nickel)
        {
            val-=nickel;
            count++;
        }
        while(val>=penny)
        {
            val-=penny;
            count++;
        }

    }
    printf("%d\n",count);
}