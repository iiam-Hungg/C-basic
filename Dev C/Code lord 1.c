#include<stdio.h>
int main()
{
	float a, b, c, d;
	printf("Nhap diem mon Toan la ");
	scanf("%f", &a);
	printf("Nhap diem mon Ly la ");
	scanf("%f", &b);
	printf("Nhap diem mon Hoa la ");
	scanf("%f", &c);
	d = (a+b+c)/3;
	printf("Diem trung binh 3 mon la %.2f", d);
	return 0;
}


