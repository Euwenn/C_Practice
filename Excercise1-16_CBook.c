#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;        /* current line length */
    int max;        /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { /* there was a line */
        printf("Length of longest line: %d\n", max);
        printf("Longest line (first %d characters): %s\n", MAXLINE - 1, longest);
    }
    return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;
    int char_count = 0;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
        char_count++;
    }

    /* If line length exceeds MAXLINE, continue counting but don't store */
    while ((c = getchar()) != EOF && c != '\n') {
        char_count++;
    }

    /* Only add newline if within limit */
    if (c == '\n' && char_count < lim) {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return char_count;  // Return total line length, even if > MAXLINE
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


