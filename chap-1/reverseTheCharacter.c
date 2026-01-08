#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[]);

int main(void)
{
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s\n", line);
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

/* reverse: reverse the string s in place (including the newline) */
void reverse(char s[])
{
    int i = 0;
    int j;
    char temp;

    while (s[i] != '\0') // find end
        i++;

    j = 0;
    i--; // now i points to '\n'

    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        j++;
        i--;
    }
}