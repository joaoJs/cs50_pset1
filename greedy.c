#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    do 
    {
        printf("O hai! How much change is owed?\n");
        change = get_float();
    }
    while(change < 0);
    
    change = round(change * 100);
    
    int count = 0;
    
    do
    {
       if (change >= 25) 
       {
           count++;
           change = change - 25;
       }
       if (change >= 10 && change< 25)
       {
           count++;
           change = change - 10;
       }
       if (change >=5 && change < 10)
       {
           count++;
           change = change - 5;
       }
       if (change > 0 && change < 5)
       {
           count++;
           change = change - 1;
       }
    }
    while (change > 0);
    
    printf("%i\n", count);
    
}