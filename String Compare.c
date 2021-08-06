/* Comparing the two strings */


#include<stdio.h>
#include<string.h>
main()
{
char string1[30],string2[15];
int x;
printf("\n Enter first string:");
gets(string1);
printf("\n Enter second string:");
gets(string2);
x=strcmp(string1,string2);
if(x==0)
printf("\n Both strings are equal");
else if(x>0)
printf("\n First string is bigger");
else
printf("\n Second string is bigger");
}
