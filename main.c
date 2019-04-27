#include <stdio.h>
#include "Function.h"
#include "Cipher(No_Key_or_Substitution).h"

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
    printf("What Cipher do you want? (1) Rotation Cipher.... (2) Subsitution Cipher ");
    int decision;
    scanf("%d", &decision);
    
    //This block of code is to get user input for the cipher process.
   printf("Do you have a key? (1) yes (2) no");
   int key_choice;
   scanf("%d", &key_choice);
   int key;
   if(key_choice == 1)
   {
       printf("What is the key ");
       scanf("%d", &key);
   }
   
   if(decision == 1 && key_choice == 2)
   {
       int w_length = strlen(word);
       Rotation_Cipher_no_Key(word, w_length);
       return 0;
   }
   
   switch(decision)
   {
       case 1:
       Rotation_Cipher(word, limit, key);
       return 0;
       case 2:
       Substitution_Cipher(word, limit);
       return 0;
       default:
       if(decision > 2 || decision < 1)
       {
           printf("incorrect decision. Restart program.");
           goto top;
       }
   }  
}