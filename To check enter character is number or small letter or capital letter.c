#include<stdio.h>
void main()
{
  char ch;
  printf("Enter any character\n");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
  printf("U entered capital letter\n");
  else if(ch>='a' && ch<='z')
  printf("U entered small alphabet\n");
  else if(ch>=48 && ch<=57)
  printf("U entered number\n");
  else
  printf("U entered special character\n");
              
}
