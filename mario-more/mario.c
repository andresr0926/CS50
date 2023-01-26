#include <cs50.h>
#include <stdio.h>

int get_height(void);
void make_wall(int h);

int main(void)
{
    int h = get_height(); // get height of the wall
    make_wall(h); //make the wall

}

int get_height(void)
{
    int h;
    do
    {
        h = get_int("Height: "); // ask user for height of the wall
    }
    while (h <= 0 || h > 8); // check that height is not negative or bigger than 8
    return h; // return the height of the wall
}

void make_wall(int h)
{
    for (int i = 0; i < h; i++) // start wall and iterate up the height
    {
        int k = h - i - 1; // set number of blanks before #
        while (k > 0)
        {
            printf(" "); // print number of blanks
            k--;
        }
        for (int j = 0; j <= i; j++) // iterate number of # before starting new line
        {
            printf("#"); // print number of #
        }
        printf("  ");
        for (int l = 0; l <= i; l++) // iterate number of # before starting new line
        {
            printf("#"); // print number of #
        }
        printf("\n");
    }
}