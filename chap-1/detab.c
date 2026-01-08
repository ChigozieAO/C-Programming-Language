#include <stdio.h>
#define TABSTOP 18

int main(void)
{
    int pos = 0;
    int c, i, space;
    while ((c = getchar()) != EOF)
        if (c == '\t')
        {
            space = TABSTOP - (pos % TABSTOP);
            for (i = 0; i < space; i++)
            {
                putchar(' ');
            }
            pos += space;
        }
        else if (c == '\n')
        {
            putchar('\n');
            pos = 0;
        }
        else
        {
            putchar(c);
            pos++;
        }
    return 0;
}