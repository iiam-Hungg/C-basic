#include<stdio.h>
//int main()
//{
//	int a,b,c,d, max;
//	printf("nhap vao 4 so nguyen\n");
//	scanf("%d%d%d%d", &a, &b,&c,&d);
//	if(a>b && a>c && a>d){
//		printf("max = %d", a);
//	}else if(b>a && b>c && b>d){
//		printf("max = %d", b);
//	}else if(c>a &&c>b &&c>d){
//		printf("max = %d", c);
//	}else{
//	    printf("max = %d", d);
//	}
//
//	return 0;
//}

//btap 3
#include<math.h>
int main ()
{
	int a,b,c;
	float d, x1,x2;
	printf("nhap vao 3 so nguyen\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	d = b*b - 4*a*c;
	printf("d=%.2f",d);
	if(d<0){
		printf("phuong trinh vo nghiem");
	}else if(d=0){
		printf("phuong trinh co 1 nghiem kep");
		x1=x2=-b/(2*a);
		printf("x1=x2=%.2f", x1,x2);
	}else{
		printf("phuong trinh co 2 nghiem phan biet");
		x1= (-b + sqrt(d))/ (2*a);
		x2= (-b - sqrt(d))/ (2*a);
		printf("x1 = %.2f\t x2=%.2f", x1,x2);
	}
	
	return 0;
}
//btap5
//int main()
//{
//	int a,b,c,T;
//	printf("Nhap vao 3 mon toan ly hoa\n", a,b,c);
//	scanf("%d%d%d", &a, &b, &c);
//	T=a+b+c;
//	printf("T=%d\n",T);
//	if(T>=15 &&(a>=4)&&(b>=4)&&(c>=4)){
//		printf("Pass\n",T);
//	    if(a>5 &&b>5 &&c>5)
//	    printf("hoc deu cac mon");
//	    else
//	    printf("hoc chua deu cac mon");
//	}else{
//		printf("trat\n");
//	}
//	return 0;
//}
//btap 4
//int main()
//{
//	int hh,mm,ss,t;
//	printf("nhap vao gio phut giay\n", hh,mm,ss);
//	scanf("%d%d%d", &hh, &mm, &ss);
//	printf("nhap vao so giay them\n", t);
//	scanf("%d", &t);
//	if(ss+t<60){
//		ss= ss+t;
//	}else{
//		ss=(ss+t)-60;
//		mm=mm+1;
//	}if(mm>=60){
//		mm=mm-60;
//		hh=hh+1;
//	}
//	printf("\n gio:phut:giay la %.2d %.2d %.2d", hh,mm,ss);
//	return 0;
//}



	
