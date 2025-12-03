#include <stdio.h>

int main(void)
{

    int c, tb, bl, nl;

    nl = 0;
    tb = 0;
    bl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
        ++tb;
        else if (c == ' ')
        ++bl;
    printf("%d%3d%6d\n", nl, tb, bl);
}