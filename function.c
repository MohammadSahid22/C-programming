#include<stdio.h>
int rect_area(int l,int h)
{
int area;
area=l*h;
return area;
}
int rect_perimeter(int l,int h)
{
int p;
p=2*(l+h);
return p;
}
int main()
{
int a,b,x,y;
printf("Enter Length of Rectangle : ");
scanf("%d",&a);
printf("\nEnter Width of Rectangle : ");
scanf("%d",&b);
x=rect_area(a,b);
y=rect_perimeter(a,b);
printf("\nArea of Rectangle: %d", x);
printf("\nPerimeter of Rectangle: %d\n", y);
return 0;
}
