#include<stdio.h>
#include<math.h>
int main() 
{
/*a, b, c are coefficient of a quadratic equation*/
int a, b, c, d;
float r1, r2;
printf ("Enter the coefficient a, b, c of the quadratic equation") ;
scanf("%d, %d, %d", a, b, c) ;
d= (b*b-4*a*c) ;
if(d<0) 
{ 
  printf ("roots are imaginary") ;
}
else if(d==0) 
{
r1=-b/(2*a) ;
r2=r1;
printf ("Roots are equal \n r1=%f,r2=%f",r1,r2) ;
}
else
{
r1=(-b+sqrt(b*b-4*a*c))/2*a;
r2=(-b-sqrt(b*b-4*a*c))/2*a;

printf ("Roots are real and distinct r1=%f, r2=%f",r1,r2) ;
}
return 0;
}
