#include<stdio.h>
int main()
{
	int a, b, c;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	if(a>b && a>c){
	   printf("max = a");
	}else if(a<b && b>c){
	   printf("max = b");
	}else{
		printf("max = c");
	}
	return 0;
}


// btap 2
#include<stdio.h>
int main()
{
	int a;
	printf("a=");
	scanf("%d=", &a);
	if(a>0){
		if(a%2==0){
		   printf("a la so duong chan");
	 	}else{
	 		printf("a la so duong le");
		}
	}else if (a<0){
		if(a%2==0){
		   printf("a la so am chan");
	 	}else{
	 		printf("a la so am le");
		}
	}else {
		printf("a la so 0");
	}
	
	
	return 0;
}

