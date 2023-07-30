#include <stdio.h>
int main()
{
    char letter;
    printf("ASCII values for letters A to Z\n");
    for (letter='A';letter<='Z';letter=letter+1)
    {
        printf("%c=%d\n",letter,letter);
    }
    return 0;
}
