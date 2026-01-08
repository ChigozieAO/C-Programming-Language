#include <stdio.h>
#define MAXLINE 1000
#define MINLENGTH 80

int getline(char line[], int maxline);

int main(void)
{
    int len;            /*current line length*/
    char line[MAXLINE]; /*current input line*/

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > MINLENGTH)
        {
            printf("%s", line);
        }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}