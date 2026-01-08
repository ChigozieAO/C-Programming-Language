#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void trim(char s[]);

int main(void)
{
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0)
    {
        trim(line);
        if (line[0] != '\0')
        {
            printf("%s", line);
        }
    }
    return 0;
}

/* getline: read a line and return its length */
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

/* trim: remove trailing blanks and tabs, delete blank lines */
void trim(char s[])
{
    int i = 0;

    // Find the end of the string
    while (s[i] != '\0')
        i++;

    // Walk backwards, skipping trailing space, tab, and newline
    while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
        i--;

    // If we have content, add newline and null terminator
    if (i > 0)
    {
        s[i] = '\n';
        s[i + 1] = '\0';
    }
    else
    {
        // Line was entirely blank — make it empty
        s[0] = '\0';
    }
}