#include<stdio.h>
        void main()
    {
         char ch;
         printf("Enter alphabet:\n");  				      
         scanf("%c",&ch);
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E')
         printf("You entered vowel");
         else
         printf("you entered consonant");
       }
