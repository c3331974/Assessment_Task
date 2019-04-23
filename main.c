#include <stdio.h>

void Rotation_Cipher(char word);
void Subsitution_Cipher(char word);

int main()
{
    //This block of code will be used to obtain user input for the program.
    int limit;
    char word[limit]; //This is the string for user input and will be used for either the rotation cipher or subsitution cipher.
    printf("What is your word? ");
    scanf('%s', &word);
    printf("How many letters do you have in your word? ");
    scanf("%d", &limit);
    
    
    //This block of code will be used to to determin which cipher the user wants to use.
    printf("What Cipher do you want? (1) Rotation Cipher.... (2) Subsitution Cipher");
    int decision;
    scanf("%d", &decision);
    switch(decision)
    {
        case 1:
        Rotation_cipher(word);
        case 2:
        Subsitution_cipher(word);
        default:
        printf("Incorrect choice. Restart program.");
        
    }

}

void Rotation_cipher(char word)
{
    
}

void Subsitution_cipher(char word)
{
    
}









