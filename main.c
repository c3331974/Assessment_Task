#include <stdio.h>
#include "Function.h"
#include "Cipher(No_Key_or_Substitution).h"

int main()
{
top:
    
    printf("How many letters do you have in your word? ");
    int limit;/*"limit" is itintialised to allow the input of a string since C doesn't support input for a string
    that does not have a specified size.*/ 
    scanf("%d", &limit);
    char word[limit]; /* "word" is the string that is initialised with respect to the limit for user input and
    to be analysed - encryption or decryption - by the cipher algorithms.*/
    printf("What is your word: ");
    scanf("%s", word);
    
    
    printf("What Cipher do you want? (1) Rotation Cipher.... (2) Subsitution Cipher ");
    int decision;//"decision" will be used to determine what type of cipher the user wants.
    scanf("%d", &decision);
    
    /*This switch statment is initialised with the condition, "decision", to correctly find execute and simplify the code based on what type 
    of cipher the user picked. */ 
   switch(decision)
   {
    case 1://case 1 holds the block of code that calls the functions for the rotation cipher. Whether they have a key or not.
       printf("Do you have a key? (1) yes (2) no");
       int key_choice;//Initialised to for user input on whether the user has a key or not.
       scanf("%d", &key_choice);
       //The first "if" statement is to call the "Rotation_Cipher" if the user has a key and word or encrypted word.
       if(key_choice == 1)
       {
           int key;
           printf("What is the key ");
           scanf("%d", &key);
           Rotation_Cipher(word, limit, key);
           return 0;
       //The second "if" statement is to call the "Rotation_Cipher_no_Key" function if the user does not have a key but has an encrypted word.
       }else if(decision == 1 && key_choice == 2)
       {
           int w_length = strlen(word);
           Rotation_Cipher_no_Key(word, w_length);
           return 0;
       //The third "if" statement is for when the user inputs the incorrect option for whether they have a key or not. It will restart the program.
       }else if(key_choice > 2 || key_choice < 1)
       {
           printf("Incorrect choice. Restarting program...\n");
           goto top;
       }
    case 2://case 2 will call the "Substitution_Cipher" if the user picked the substitution cipher before the switch statment.
       Substitution_Cipher(word, limit);
       return 0;
    default://default will contain code that will restart the program if the user input is not 1 or 2.
       if(decision > 2 || decision < 1)
       {
           printf("incorrect decision. Restart program.");
           goto top;
       }
   }  
    
   
}