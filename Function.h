#include <stdio.h>
#include <string.h>
/*Essentially this Rotation_Cipher function takes a character from the user's word by using a for loop and then analysing the alhpabet
string untill there is a character that matches that same character from the user's word. Once there is a match it the takes the ascii_position
of the character from word and increase/decrease(based on the key) the position by the amount of the key making sure that the ascii_position 
of the new character does not 'fall' out of the positions that represent the alphabet(if so it then increased/decreased by 26 which is the
range of the alphabet). once this change has been made, a char variable then takes that value and converts it to a character which will then 
be printed to the console. The amount of times this algorithm will execute will be equal to the amount of letters are in the user's word.*/
void Rotation_Cipher(char word[], int limit, int key)
{
   char alphabet[] = "abcdefghijklmnopqrstuvwxyz";/*This string will be used to
   compare the letters of the word from the user in terms of their position on the ascii table*/
  
restart:
   
   printf("Would you like to: (1) Encrypt or (2) Decrypt ");
   int choice;
   scanf("%d", &choice);

   //This block of code is to determine whether the key is appropriate.
   if (key > 25 || key < -25)
   {
       printf("The key is too large or small. Enter another key.");
       goto restart;
   }
   
   int loop_counter;
   int ascii_position_of_word;/*This will be used to get the position in terms of the ascii table for a particular character in the
       the word from the user and compare it to the alphabet.*/
   int ascii_position_of_alphabet; //This will get the ascii position of a character in the alphabet string.
   char letter;//Later in the algorithm this will be used convert the ascii position of the encrypted letter to a character to print.
    
   //The following code is the cipher process based on whether it is an encryption or decryption.
   if (choice == 1)/////ENCRYPTION/////
   {
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
                  
                   //This if statment is determine if the resulting ascii_position_of_word is to large or small and will print a character other than a letter.
                   if (ascii_position_of_word > 122)
                   {
                       ascii_position_of_word = ascii_position_of_word - 26; //26 is the range of positions of the alphabet in the ascii table and this will bring the encrypted letter back to being in the alphabet.
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }else if(ascii_position_of_word < 97)
                   {
                       ascii_position_of_word = ascii_position_of_word + 26; //26 is the range of positions of the alphabet in the ascii table and this will bring the encrypted letter back to being in the alphabet.
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }else
                   {
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }
               }
           }
       } 
   }else if(choice == 2)/////DECRYPTION/////
   {
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
                   ascii_position_of_word = ascii_position_of_word - key;/*This will change the position of the character by the amount
                   of the key*/
                  
                   //This if statment is determine if the resulting ascii_position_of_word is to large or small and will print a character other than a letter.
                   if (ascii_position_of_word < 97)
                   {
                       ascii_position_of_word = ascii_position_of_word + 26; //26 is the range of positions of the alphabet in the ascii table and this will bring the decrypted letter back to being in the alphabet.
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }else if(ascii_position_of_word > 122)
                   {
                       ascii_position_of_word = ascii_position_of_word - 26; //26 is the range of positions of the alphabet in the ascii table and this will bring the decrypted letter back to being in the alphabet.
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }else
                   {
                       letter = ascii_position_of_word;
                       printf("%c", letter);
                       break;
                   }
               }
           }
       }
   }else{
       printf("Incorrect choice. Try again.\n");
       goto restart;
   }     
}

/*This function works by using the principle of the algorithm used in the Rotation_Cipher algorthim however is slightly altered. A for loop 
analyses the user's word and 'picks' out a character one by one to then compare to the alphabet string. This is done by taking the ascii
position of both the user's word's character and the alphabet string and analysing the alphabet untill the ascii position are identical.
If they are indentical, then the algorithm will take the index position of the alphabet string and place it into the sub_alphabet string and
make the ascii position of the user's word's character equal to character of the sub_alhpabet string at the index position. Followed after is
a conversion of the ascii position to a char variable which will then be printed to the console. The amount of times this algorithm will 
 execute is based on the amount of character's of the user's word.*/
void Substitution_Cipher(char word[], int limit)
{
    char alphabet[] =     "abcdefghijklmnopqrstuvwxyz";
	char sub_alphabet[] = "AKLMBRPOITUYQWSZXVNCEFJGDH";//This string will be used as the subsitutuion of the normal alphabet
	int ascii_position_of_word;
	int ascii_position_of_alphabet;//ascii position of alphabet and word are used to compare and be analysed in terms of the sub alphabet string for the cipher to work.
	int i;//loop counter for word
	int j;//loop counter for alphabet or sub_alphabet
	char letter;//letter is used to convert the ascii position of a character to their actual character to be printed out.

start:
    //this block of code is used to get user input for what specific function they want.
	printf("Do you want to (1) Encrypt or (2) Decrypt ");
	int user_choice;
	scanf("%d", &user_choice);
	
	if (user_choice == 1)/////ENCRYPTION
	{
	    //This nested for loop is used to analyse every single character of word and sub_alpahbet to then process for the use of the alphabet string in order to encrypt.
	    for (i = 0; i < limit; i++)
	    {
		    ascii_position_of_word = word[i];//This code converts a specific character of the user's word to it's position on the ascii table.
		    
		    //this for loop is used to analyse the sub_alphabet string for matches that will then be used to analyse the alphabet string.
		    for (j = 0; j < 26; j++)
    		{
    			ascii_position_of_alphabet = alphabet[j];
    			if (ascii_position_of_word == ascii_position_of_alphabet)
    			{
    				ascii_position_of_word = sub_alphabet[j];//This code sets the ascii_position_of_word to the encrypted counter-part.
    				letter = ascii_position_of_word;//This code converts the ascii position to it's allocated character.
    				printf("%c", letter);
    				break;
    			}
    		}
    	}
	}else if(user_choice == 2)/////DECRYPTION
	{
	    //This nested for loop is used to analyse every single character of word and sub_alpahbet to then process for the use of the alphabet string in order to decrypt.
	    for (i = 0; i < limit; i++)
	    {
		    ascii_position_of_word = word[i];//This code converts a specific character of the user's word to it's position on the ascii table.
		
		    //this for loop is used to analyse the sub_alphabet string for compatable matches that will then be used to analyse the alphabet string.
		    for (j = 0; j < 26; j++)
    		{
    			ascii_position_of_alphabet = sub_alphabet[j];
    			if (ascii_position_of_word == ascii_position_of_alphabet)
    			{
    				ascii_position_of_word = alphabet[j];//This code sets the ascii_position_of_word to the decrypted counter-part.
    				letter = ascii_position_of_word;//This code converts the ascii position to it's allocated character.
    				printf("%c", letter);
    				break;
    			}
    		}
    	}
	}else
	{
	    printf("Incorrect choice. Starting again.\n");
	    goto start;
	}
	
}