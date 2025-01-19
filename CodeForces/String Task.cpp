#include <stdio.h>
#include <ctype.h>

int main() {
    char input[101], output[201];
    int j = 0;



    scanf("%s", input);


    for (int i = 0; input[i] != '\0'; i++) {
        char ch = tolower(input[i]);


        if (ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i') {
            output[j++] = '.';
            output[j++] = ch;
        }
    }
    output[j] = '\0';


    printf("%s\n", output);

    return 0;
}
