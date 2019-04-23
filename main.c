#include <stdio.h>



int main()
{
    //This block of code will be used to obtain user input for the program.
    printf("How many letters do you have in your word? ");
    int limit;
    scanf("%d", &limit);
    char word[limit]; //This is the string for user input and will be used for either the rotation cipher or subsitution cipher.
    printf("What is your word? ");
    scanf('%s', &word);
    
    
}
