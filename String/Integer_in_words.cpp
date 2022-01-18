/*Exercise 6-1. Write a program that will prompt for and read a positive integer less than 1000 from the keyboard, 
and then create and output a string that is the value of the integer in words. 
For example, if 941 is entered, the program will create the string "Nine hundred and forty one".*/

#include<stdio.h>
#include<string.h>
int main()
{
	char ones[][6] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	char teen[][10] = {"ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
 	char tens[][8] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int n, d, one=0, ten=0, hund=0;
	int digits[3];	
	do
	{
		printf("Enter a number (1-999):   ");
		scanf("%d", &n);
	}
	while(n<1||n>999);
	int pos=1;
	while(n!=0)
	{
		d=n%10;
		if(pos==1)
			one = d;
		else if(pos==2)
			ten = d;
		else if(pos==3)
			hund = d;
		pos++;
		n/=10;
	}
	printf("\nNumber in words :  ");
	if(ten!=1)
		printf("%s%s%s %s", ones[hund], hund==0?"":" hundred ", tens[ten], ones[one]);
	else
		printf("%s%s %s", ones[hund], hund==0?"":" hundred", teen[one]);
	return 0;
}

