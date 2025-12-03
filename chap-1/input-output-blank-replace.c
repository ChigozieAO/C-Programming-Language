#include <stdio.h>

int main(void)
{
    int c;
    int lastspace = 0;

    while ((c = getchar()) != EOF)

        if (c == ' ')
        {
            if (lastspace == 0)
            {
                putchar(' ');
            }
            lastspace = 1;
        }

        else
        {
            putchar(c);
            lastspace = 0;
                }
}
