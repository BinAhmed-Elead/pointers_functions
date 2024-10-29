#include <stdio.h>

int lengthOfSentence(char*);
int numberOfWords(char sentence[], int strLength);
int numberOfVowels(char sentence[], int strLength);
int vowelFreq(char sentence[], char vowel);	

int main()
{
	char sentence[100];
	printf("Enter a sentence: ");
	fgets(sentence,100,stdin);
	printf("length of the sentence is: %d\n",lengthOfSentence(sentence));
	printf("number of words: %d\n", numberOfWords(sentence,lengthOfSentence(sentence)));
	printf("number of vowels: %d\n",numberOfVowels(sentence,lengthOfSentence(sentence)));
	printf("Freqency of the vowel(a): %d\n", vowelFreq(sentence,'a'));
	printf("Freqency of the vowel(e): %d\n", vowelFreq(sentence,'e'));
	printf("Freqency of the vowel(u): %d\n", vowelFreq(sentence,'u'));
	printf("Freqency of the vowel(o): %d\n", vowelFreq(sentence,'o'));
	printf("Freqency of the vowel(i): %d\n", vowelFreq(sentence,'i'));
	return 0;
}

int lengthOfSentence(char sentence[])
{
	int length = 0;
	while(*sentence!=NULL)
	{
		if(*sentence==NULL)
			break;
		length++;sentence++;
	}
	return length-1;//minus 1 because the null terminator is counted
}

int numberOfWords(char sentence[], int strLength)
{
	if(strLength == 0)
		return 0;
	int words = 1;
	for(int i = 0 ; i < strLength ; i++)
	{
		if(sentence[i] == ' ')
		{
			words++;
		}
	}
	return words;
}

int numberOfVowels(char sentence[], int strLength)
{
	if(strLength == 0)
		return 0;
	int vowels = 0;
	for(int i = 0 ; i < strLength ; i++)
	{
		sentence[i] = sentence[i] | 0x20 ;// to lower case
		if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')	
		{
			vowels++;
		}
	}
	return vowels;
}

int vowelFreq(char sentence[], char vowel)
{
	int vowels = 0;
	while(*sentence != NULL)
	{
		if(*sentence == vowel)
		{
			vowels++;
		}
		sentence++;
	}
	return vowels;
}
