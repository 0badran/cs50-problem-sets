#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j > i; j--)
        {
            printf("%c", ' ');
        }
        for (int k = -1; k < i; k++)
        {
            printf("%c", '#');
        }
        printf("  ");
        for (int k = -1; k < i; k++)
        {
            printf("%c", '#');
        }
        printf("\n");
    }
}
