#include<stdio.h>
int
main ()
{
  int num1, num2;
  printf ("Enter the numbers\n");
  scanf ("%d  %d", &num1, &num2);
  if (num1 == num2)
    printf ("%d is equal to %d", num1, num2);
  if (num1 > num2)
    printf ("%d is greater than %d", num1, num2);
  if (num1 < num2)
    printf ("%d is less than %d", num1, num2);

  return 0;
}
