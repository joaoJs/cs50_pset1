#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int s = 0; s < height - (i + 1); s++)
        {
            printf(" ");
        }
        for (int h = 0; h < i + 1; h++)
        {
            printf("#");
        }
        printf("  ");
        for (int r = 0; r < i + 1; r++) 
        {
            printf("#");
        }
        printf("\n");
    }
    
}