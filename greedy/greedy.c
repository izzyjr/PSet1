#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{

    int count = 0;
    int penny = 1;
    int nickle = 5;
    int dime = 10;
    int quarter = 25;
    float input;
    int change;
    do
    {
        printf("How much change is owed? ");
        input = get_float();
        change = round(input * 100);
    }
    while (change <= 0);

    while (change >= quarter)
    {
        change = change - quarter;
        count++;
    }
    while (change >= dime)
    {
        change = change - dime;
        count++;
    }
    while (change >= nickle)
    {
        change = change - nickle;
        count++;
    }
    while (change >= penny)
    {
        change =  change - penny;
        count++;
    }
    printf("%i\n", count);

}
