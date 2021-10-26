#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define parasize 1000
#define buffersize 100
#define maxwords 500
#define WORDLEN 15

int main()
{
	char para[parasize+1];
	char buffer[buffersize];
	char endstr[] = "*\n";
	char words[maxwords][WORDLEN];
	int nwords[maxwords];
	int wordlen=0, wordcount=0;
	char word[wordlen+1];
	
	
	printf("Enter a paragraph and mark the end with * :  \n");
	while(true)
	{
		if(!strcmp(fgets(buffer, buffersize, stdin), endstr))
			break;

		if(strlen(para)+strlen(buffer)+1>parasize)
			{
				printf("Maximum size reached.  Terminating Program"
				"X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-");
				return 1; 
			}
		strcat(para, buffer);	
	}
	
	for(int i=0; i<strlen(para); i++)
	{
		if(!isalpha(para[i]))
			para[i]=' ';
	}
	int index=0;
	while(true)
	{
		if(para[index]==' ')
			{
			index++;
			continue;
			}
		if(para[index]=='\0')
			break;
		wordlen=0;
		while(isalpha(para[index]))
		{
		    if(wordlen==WORDLEN)
			{
				printf("Maximum size reached.  Terminating Program"
				"X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-");
				return 1; 
			}
			word[wordlen++]=tolower(para[index++]);
		}
		word[wordlen]='\0';
		bool isnew = true;
		for(int i=0; i<wordcount; i++)
			if(strcmp(word,words[i])==0)
				{
					++nwords[i];
					isnew = false;
					break;				
				}
		if(isnew)
		{
			if(wordcount>=maxwords)
			{
				printf("Maximum size reached.  Terminating Program"
				"X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-");
				return 1; 
			}
			strcpy(words[wordcount],word);
			nwords[wordcount++]=1;
		}
	}
	
	for(int i=0; i<wordcount; i++)
		{
			if(i%3==0)
				printf("\n");
			printf("%-15s%5d   ", words[i], nwords[i]);
		}
	return 0;
}
