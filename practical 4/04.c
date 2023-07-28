#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter");
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':printf("a is a vowel\n");
        break;
    case 'e':printf("e is a vowel\n");
        break;
    case 'i':printf("i is a vowel\n");
        break;
    case 'o':printf("o is a vowel\n");
        break;
    case 'u':printf("u is a vowel\n");
        break;    
    default:printf("%c is not a vowel\n",letter);
        
    }
}