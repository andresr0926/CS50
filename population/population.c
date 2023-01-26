#include <cs50.h>
#include <stdio.h>

int get_ss(void);
int get_es(int ss);
void rpopulation(int ss, int es);

int main(void)
{

    int ss = get_ss();
    int es = get_es(ss);
    rpopulation(ss, es);

}

// TODO: Prompt for start size
int get_ss(void)
{
    int ss;
    int es;
    do
    {
        ss = get_int("Start size: ");
    }
    while (ss < 9);
    return ss;
}

// TODO: Prompt for end size
int get_es(int ss)
{
    int es;
    do
    {
        es = get_int("End Size: ");
    }
    while (es < ss);
    return es;

}

// TODO: Calculate number of years until we reach threshold
void rpopulation(int ss, int es)
{
    if (ss == es)
    {
        printf("Years: 0\n");
    }
    else
    {
        int n = 0;
        do
        {
            ss = ss + (ss / 3) - (ss / 4);
            n++;
        }
        while (ss < es);
// TODO: Print number of years
        printf("Years: %i\n", n);
    }
}