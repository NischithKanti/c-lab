#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, start, end;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    i = strlen(s) - 1;

    while (i >= 0)
    {
        while (i >= 0 && s[i] == ' ')
            i--;

        end = i;

        while (i >= 0 && s[i] != ' ')
            i--;

        start = i + 1;

        for (j = start; j <= end; j++)
            printf("%c", s[j]);

        if (start > 0)
            printf(" ");
    }

    return 0;
}