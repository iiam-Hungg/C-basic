#include<stdio.h>
int main()
{
	float a,b,c,d,e,f, x,y;
	printf("enter a = ");
	scanf("%f", &a);
	printf("enter b = ");
	scanf("%f", &b);
	printf("enter c = ");
	scanf("%f", &c);
	printf("enter d = ");
	scanf("%f", &d);
	printf("enter e = ");
	scanf("%f", &e);
	printf("enter f = ");
	scanf("%f", &f);
	// a*x + b*y = c;
	printf("%f*x + %f*y = %f\n", a,b,c);
	// d*x + e*y = f;
	printf("%f*x + %f*y = %f\n", d,e,f);
	y= (c*d - a*f)/ (b*d - e*a);
	printf("y = %f ", y);
	x= (c*e - b*f)/(a*e-d*b);
	printf("x = %f", x);
	return 0;
}



