#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int count[256] = {0};
    int i;

    printf("Enter first word: ");
    scanf("%s", a);

    printf("Enter second word: ");
    scanf("%s", b);

    if (strlen(a) != strlen(b))
    {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("They are anagrams");

    return 0;
}