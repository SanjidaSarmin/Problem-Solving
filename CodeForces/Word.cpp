#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[101];
    int uppercase = 0, lowercase = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isupper(word[i]))
        {
            uppercase++;
        }
        else if (islower(word[i]))
        {
            lowercase++;
        }
    }

    if (lowercase >= uppercase)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    else
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = toupper(word[i]);
        }
    }

    printf("%s\n", word);

    return 0;
}
