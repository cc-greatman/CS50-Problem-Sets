// A program that determines the number of coins to be given as change
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Initialize variables
    int change, coin_count;

    do
    {
        printf("Change owed: ");
        scanf("%d", &change);        
    }
    while (change <= -1);

    coin_count = 0;

    // Calculate the number of coins needed for change
    while (change >= 25)
    {
        change -= 25;
        coin_count++;
    }

    while (change >= 10)
    {
        change -= 10;
        coin_count++;
    }
    while (change >= 5)
    {
        change -= 5;
        coin_count++;
    }
    while (change >= 1)
    {
        change -= 1;
        coin_count++;
    }

    //Print the total number of coins needed
    printf("%d\n", coin_count);
}

