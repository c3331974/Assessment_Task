#include <stdio.h>
#include <string.h>
#include "Words.h"

int Rotation_Cipher_no_Key(char word[], int w_length)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int seven_list_length = strlen(seven_letter_words);
	int key;
	int i;
	int j;
	int ascii_word;
	int ascii_alphabet;

	for (key = 1; key < 26; key++)
	{	
		for (i = 0; i < w_length; i++)
		{
			ascii_word = word[i];
			for (j = 0; j < 26; j++)
			{
				ascii_alphabet = alphabet[j];

				if (ascii_word == ascii_alphabet)
				{
					int q = j + key;
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
				for (h = 0; h < w_length; h++)
				{
					int k;
					for (k = 0; k < seven_list_length; k++)
					{
						if (word[h] == four_letter_words[k] && word[h + 1] == four_letter_words[k + 1] && word[h + 2] == four_letter_words[k + 2] && word[h + 3] == four_letter_words[k + 3])
						{
							printf("%s is the decrypted word\n", word);
							return 0;
						}
					}
				}
			}
		}
	}
    
return 0; 
}