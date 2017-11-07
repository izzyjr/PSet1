#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hash;
    int space;
    int height;
    do
    {
        printf("height: ");
        height = get_int( );

    }
    while (height > 23 || height < 0);

    for (int nr = 0; nr < height; nr++)
    {
        for (space = 1; space < height - nr; space++)
        {
            printf(" ");
        }
        for (hash = -2; hash < height - space; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}