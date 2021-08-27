     #include<stdio.h>
     int factorial(int t);	// function declaration or prototyping
	void main( )
	{
		int n, f;
		n = 5;
		f = factorial (n);		// function calling statement
		printf(" \n Factorial f = %d", f);
			}
    
    int factorial(int t)	//function definition with argument, with return value.
	{
		int f;
		if ((t == 1)||(t==0)) 			
		return 1;
		else
		return (t * factorial ( t - 1) );
		
		//5*facotrial(4)
		//4*factorail(3)
		//3*factorial(2)
		//2*facotrail(1)
		//1
		
		
		}

