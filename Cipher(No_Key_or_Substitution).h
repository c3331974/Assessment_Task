#include <stdio.h>
#include <string.h>
#include "Words.h"

/*The function here will process the user's word and find any potential decrypted words.
This is done by analysing the word's characters and finding the same one in the alphabet string below.
Once the character is found in the alphabet string, the algorithm will rotate the alphabet string once and then make the character in 
the user's word equal to that of the alphabet's rotated string. Once all the characters of the user's word has undergone this change once 
the second algorithm will compare that changed word to all the words in the allocated list - governed by the amount of characters the user's
word - inside the "Words.h" header file. If the changed word matches with one inside the allocated common words string then it will be 
outputted as potential word for the user to see it. It will keep on doing this till the alphabet string has done a full rotation and the
user's word is practically back to it's encrypted intial state. */
int Rotation_Cipher_no_Key(char word[], int w_length)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    //This list of interger variables hold the length of the common words strings based on the amount of characters.
	int two_list_length = strlen(two_letter_words);
	int three_list_length = strlen(three_letter_words);
	int four_list_length = strlen(four_letter_words);
	int five_list_length = strlen(five_letter_words);
	int six_list_length = strlen(six_letter_words);
	int seven_list_length = strlen(seven_letter_words);
	int eight_list_length = strlen(eight_letter_words);
	int nine_list_length = strlen(nine_letter_words);
	int ten_list_length = strlen(ten_letter_words);

	int key = 1;//"key" is intialised to act as all keys that may potentialallybe the key that decryptes the user's encrypted word and will be a loop counter for the first loop.
	int i;//"i" is initialised to be a loop counter for the second "for" loop and will 'pick' out a character of the user's word.
	int j;//"j" is initialised to be a loop counter for the third loop. It will also 'pick' out a character of the alphabet.

	for (key; key < 26; key++)
	{
		for (i = 0; i < w_length; i++)
		{
			for (j = 0; j < 26; j++)
			{

				if (word[i] == alphabet[j])
				{
					int q = j + 1;
					if (q >= 26)
					{
						q = q - 26;
					}
					else if (q < 0)
					{
						q = q + 26;
					}
					word[i] = alphabet[q];
					break;
				}
			}
			if (i == (w_length - 1))
			{
				int h;
				int k;
				for (h = 0; h < w_length; h++)
				{
					switch (w_length)
					{
					case 2:
						for (k = 0; k < two_list_length; k++)
						{
							if (word[h] == two_letter_words[k] && word[h + 1] == two_letter_words[k + 1])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 3:
						for (k = 0; k < three_list_length; k++)
						{
							if (word[h] == three_letter_words[k] && word[h + 1] == three_letter_words[k + 1] && word[h + 2] == three_letter_words[k + 2])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 4:
						for (k = 0; k < four_list_length; k++)
						{
							if (word[h] == four_letter_words[k] && word[h + 1] == four_letter_words[k + 1] && word[h + 2] == four_letter_words[k + 2] && word[h + 3] == four_letter_words[k + 3])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 5:
						for (k = 0; k < five_list_length; k++)
						{
							if (word[h] == five_letter_words[k] && word[h + 1] == five_letter_words[k + 1] && word[h + 2] == five_letter_words[k + 2] && word[h + 3] == five_letter_words[k + 3] && word[h + 4] == five_letter_words[k + 4])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 6:
						for (k = 0; k < six_list_length; k++)
						{
							if (word[h] == six_letter_words[k] && word[h + 1] == six_letter_words[k + 1] && word[h + 2] == six_letter_words[k + 2] && word[h + 3] == six_letter_words[k + 3] && word[h + 4] == six_letter_words[k + 4] && word[h + 5] == six_letter_words[k + 5])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 7:
						for (k = 0; k < seven_list_length; k++)
						{
							if (word[h] == seven_letter_words[k] && word[h + 1] == seven_letter_words[k + 1] && word[h + 2] == seven_letter_words[k + 2] && word[h + 3] == seven_letter_words[k + 3] && word[h + 4] == seven_letter_words[k + 4] && word[h + 5] == seven_letter_words[k + 5] && word[h + 6] == seven_letter_words[k + 6])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
							}
						}
					case 8:
						for (k = 0; k < eight_list_length; k++)
						{
							if (word[h] == eight_letter_words[k] && word[h + 1] == eight_letter_words[k + 1] && word[h + 2] == eight_letter_words[k + 2] && word[h + 3] == eight_letter_words[k + 3] && word[h + 4] == eight_letter_words[k + 4] && word[h + 5] == eight_letter_words[k + 5] && word[h + 6] == eight_letter_words[k + 6] && word[h + 7] == eight_letter_words[k + 7])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 9:
						for (k = 0; k < nine_list_length; k++)
						{
							if (word[h] == nine_letter_words[k] && word[h + 1] == nine_letter_words[k + 1] && word[h + 2] == nine_letter_words[k + 2] && word[h + 3] == nine_letter_words[k + 3] && word[h + 4] == nine_letter_words[k + 4] && word[h + 5] == nine_letter_words[k + 5] && word[h + 6] == nine_letter_words[k + 6] && word[h + 7] == nine_letter_words[k + 7] && word[h + 8] == nine_letter_words[k + 8])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					case 10:
						for (k = 0; k < ten_list_length; k++)
						{
							if (word[h] == ten_letter_words[k] && word[h + 1] == ten_letter_words[k + 1] && word[h + 2] == ten_letter_words[k + 2] && word[h + 3] == ten_letter_words[k + 3] && word[h + 4] == ten_letter_words[k + 4] && word[h + 5] == ten_letter_words[k + 5] && word[h + 6] == ten_letter_words[k + 6] && word[h + 7] == ten_letter_words[k + 7] && word[h + 8] == ten_letter_words[k + 8] && word[h + 9] == ten_letter_words[k + 9])
							{
								printf("%s is a potential decrypted word at key: %d\n", word, key);
								break;
							}
						}
					}
				}
			}
		}
	}
	return 0; 
}

int Substitution_Cipher_no_Substitution()
{
    
    return 0;
}





