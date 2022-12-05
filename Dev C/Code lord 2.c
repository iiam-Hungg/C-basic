#include<stdio.h>
int main()
{
	int a, b, p, s;
	printf("Length =");
	scanf("%d", &a);
	printf("width = ");
	scanf("%d", &b);
    p= (a+b)*2;
    printf("chu vi hinh chu nhat la %d\n", p);
    s= a*b;
    printf("dien tich hinh chu nhat la %d\n", s);	
	return 0;
}

