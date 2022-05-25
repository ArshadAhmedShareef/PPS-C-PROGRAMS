#include<stdio.h>
main() {
int n, i=1, f1=0, f2=1, f3;
printf("Enter the number");
scanf("%d", &n);
printf("%d %d", f1, f2);  //Here is the basic aaproach
while(i<=n){   //this loop is printing rest of the, other than initial 0,1 
f3=f1+f2;
printf("%d",f3);
f1=f2;    //main thing here in f1 and f2 assign with f2 and f3 value
f2=f3;
i++;
}
}
