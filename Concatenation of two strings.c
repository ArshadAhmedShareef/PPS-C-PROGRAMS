/*Concatinating of two strings with "srtcat" in built in string.h*/

#include<stdio.h>
#include<string.h>
main()
{
char string1[20],string2[20];
printf("\n Enter first string:");
gets(string1);
printf("\n Enter second string:");
gets(string2);
strcat(string1,string2);
printf("\n Concatenated string=%s",string1);
}
