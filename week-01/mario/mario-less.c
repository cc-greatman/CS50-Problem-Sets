// Prints mario bricks design substituting bricks with "#"
#include <stdio.h>
#include <stdlib.h>

// Initialize all prototypes
void bricks(int n);
void space(int y);

int main(void)
{
    int height;

    // Get user's height
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    // Re-prompt if not meeting constraints
    while (height < 1 || height >= 9);

    // Define the space block
    int space_num = (height > 1) ? height - 1 : 0;

    int i = 0;
    while (i < height)
    {
        space(space_num);
        space_num--;
        bricks(i);
        i++;
    }
}

// Print Space Blocks
void space(int y)
{
    for (int j = y; 0 < j; j--)
    {
        printf(" ");
    }
}

// Print bricks
void bricks(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");
}