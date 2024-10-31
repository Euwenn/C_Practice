#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
int main() {
    int c, n1, n2, n3;
    n1 = n2 = n3 = 0;

    while ((c = getchar()) != EOF) {
        printf("Character read: %d\n", c); // Debugging line
        if (c == '\n')
            ++n1;
        else if (c == ' ')
            ++n2;
        else if (c == '\t')
            ++n3;
    }

    printf("Newlines: %d Blanks: %d Tabs: %d\n", n1, n2, n3);
    return 0;
}
