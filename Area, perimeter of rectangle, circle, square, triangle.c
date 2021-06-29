#include <stdio.h>

int main()
{
    int l,b,aor,por,r,s,aos,pos,ba,h,a,bi,c,pot;
    float aoc,poc,aot,aosc,posc;
    printf("\nenter the length and breadth of rectangle");
    scanf("%d %d",&l,&b);
    printf("\nenter the radius of circle");
    scanf("%d",&r);
    printf("\nenter the side of square");
    scanf("%d",&s);
    printf("\nenter the base height and all sides of traingle ");
    scanf("%d %d %d %d %d",&ba,&h,&a,&bi,&c);
    aor=l*b;
    por=2*(l+b);
    aoc=3.14*r*r;
    poc=2*3.14*r;
    aos=s*s;
    pos=4*s;
    aot=0.5*ba*h;
    pot=a+bi+c;
    aosc=(3.14*r*r)/2;
    posc=3.14*r;
    printf("\n area of rectangle is %d",aor);
    printf("\n perimeter of rectangle is %d",por);
    printf("\n area of circle is %f",aoc);
    printf("\n perimeter of circle is %f",poc);
    printf("\n area of square is %d",aos);
    printf("\n perimeter of square is %d",pos);
    printf("\n area of traingle is %f",aot);
    printf("\n perimeter of traingle is %d",pot);
    printf("\n area of semi circle is %f",aosc);
    printf("\n perimeter of semicircle is %f",posc);
    return 0;
}

