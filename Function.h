#include <stdio.h>

void Rotation_Cipher(char word[], int limit)
{
   char alphabet[] = "abcdefghijklmnopqrstuvwxyz";/*This string will be used to
   compare the letters of the word from the user in terms of their position on the ascii table*/
  
restart:
   //This block of code is to get user input for the cipher process.
   printf("What is the key");
   int key;
   scanf("%d", &key);
   int choice;
   printf("Would you like to: (1) Encrypt or (2) Decrypt ");
   scanf("%d", &choice);
   
   //This block of code is to determine whether the key is appropriate.
   if (key > 25 || key < -25)
   {
       printf("The key is too large or small. Enter another key.");
       //goto restart;
   }
 
   //The following code is the cipher process based on whether it is an encryption or decryption.
   if (choice == 1)//ENCRYPTION
   {
       int loop_counter;
       int ascii_position_of_word;/*This will be used to get the position in terms of the ascii table for a particular character in the
           the word from the user and compare it to the alphabet.*/
       int ascii_position_of_alphabet; //This will get the ascii position of a character in the alphabet string
       /*This nested loop will be the algorithm for comparing the ascii position of the characters in the user's word to the alphabet
       and then printing out the encrypted letter one-by-one to form the ecrypted word.*/
       for(loop_counter = 0; loop_counter < limit; loop_counter++)
       {
           ascii_position_of_word = word[loop_counter];
           /*This inner loop will compare the user's word particular characters to the alphabet*/
           int compare_counter;
           for(compare_counter = 0; compare_counter < 26; compare_counter++)
           {
               ascii_position_of_alphabet = alphabet[compare_counter];
               
               //this is the comparison and print algorithm.
               if(ascii_position_of_alphabet == ascii_position_of_word)
               {
                   ascii_position_of_word = ascii_position_of_word + key;/*This will change the position of the character by the amount
                   of the key*/
                  
                   
                  
               }
           }
       }
       
       
       
       
   }else if(choice == 2)//DECRYPTION
   {
       
   }else
   {
       printf("Incorrect choice. Try again.\n");
       //goto restart;
   }
    
       
}


void Subsitution_Cipher(char word)
{
    
}