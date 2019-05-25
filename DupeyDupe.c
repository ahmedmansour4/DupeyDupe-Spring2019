// Ahmed Mansour
// COP3502, Spring 2019
// NID: ah505081

#include "DupeyDupe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int j, k;
	int lastMatchPos = -1;
	int dupeFound = 0;

	//Outer for loop cycles through the first word that is being compared
	for(j = 1; j < argc; j++)
	{
		//Inner for loop cycles through the second word that is being compared
		for(k = 1; k < argc; k++)
		{
			//Checking if two words are the same and that the two word are not in the same position in the 2D array
			if((strcmp(argv[j], argv[k]) == 0 )&& (j != k))
			{
				lastMatchPos = k;
				//Checking if the first word is "dupe" and that the words are sequentially in order
				if((strcmp(argv[j], "dupe") == 0) && j != k && k == (j + 1))
				{
					//sets a flag that two "dupe" strings were found next to each other
					dupeFound = 1;
				}
			}
		}
	}
	
	if(lastMatchPos != -1)
	{
		printf("%s\n", argv[lastMatchPos]); 
	}
	else
	{
		printf("no dupey dupe :(\n");
	}
	
	if(dupeFound == 1)
	{
		printf("dupe dupe!\n");
	}
	
	return 0;
}

double difficultyRating(void)
{
	return 3.5;
}

double hoursSpent(void)
{
	return 4;
}