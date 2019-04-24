#include <stdio.h>

void Rotation_Cipher(char word);
void Subsitution_Cipher(char word);

int main()
{
top:
    //This block of code will be used to obtain user input for the program.
    printf("How many letters do you have in your word? ");
    int limit;
    scanf("%d", &limit);
    char word[limit]; //This is the string for user input and will be used for either the rotation cipher or subsitution cipher.
    printf("What is your word: ");
    scanf("%s", word);
    
    
    //This block of code will be used to to determin which cipher the user wants to use.
    printf("What Cipher do you want? (1) Rotation Cipher.... (2) Subsitution Cipher");
    int decision;
    scanf("%d", &decision);
    
    if (decision == 1){
        Rotation_cipher(word);
        return 0;
    }else if(decision == 2){
        Subsitution_cipher(word);
        return 0;
    }else{
        printf("Incorrect choice. Restart program.\n");
        goto top;
    }
}


void Rotation_cipher(char word)
{
    
}

void Subsitution_cipher(char word)
{
    
}









