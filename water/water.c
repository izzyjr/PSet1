#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int minutes = get_int();

    int bottles = (minutes * 192) / 16;
    printf("bottles: %i\n", bottles);
}