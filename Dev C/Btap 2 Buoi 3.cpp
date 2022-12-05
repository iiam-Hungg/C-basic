#include<stdio.h>
int main()
{
	const float PI=3.14;
	float r;
	double s=0, v=0;
	printf("Enter R; ");
    scanf("%f",&r);
	s = 4*PI*r*r;
	printf("Dien tich hinh cau = %lfm2\n",s);
	v = (4/3)*PI*r*r*r;
	printf("The tich hinh cau = %lfm3\n", v);
	return 0;
}

