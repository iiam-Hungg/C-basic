#include<stdio.h>
#include<math.h>
//int main()
//{
//	int opt, subopt,n,d;
//	float a,b,c;
//	printf("------------------------------------\n");
//	printf("!               MENU               !\n");
//	printf("------------------------------------\n");
//	printf("----1, Tinh toan--------------------\n");
//	printf("----2, Tim so lon nhat--------------\n");
//	printf("----3, Kiem tra lai so chinh phuong-\n");
//	printf("----4, Thoat------------------------\n");
//	printf("Moi ban lua chon: ");
//	scanf("%d", &opt);
//	switch(opt){
//		case 1:
//			printf("nhap vao 2 so a va b:");
//			scanf("%f%f", &a, &b);
//			printf("------------------------------------\n");
//			printf("!               MENU               !\n");
//			printf("--------------1. Cong---------------\n");
//			printf("--------------2. Tru----------------\n");
//			printf("--------------3. Nhan---------------\n");
//			printf("--------------4. Chia---------------\n");
//			printf("nhap 1,2,3,4 de tiep tuc ,,,,\n");
//			scanf("%d", &subopt);
//			switch (subopt){
//				case 1:
//					printf("\n%.1f+%.1f=%.1f", a,b, a+b);
//				case 2:
//					printf("\n%.1f-%.1f=%.1f", a,b, a-b);
//				case 3:
//					printf("\n%.1f*%.1f=%.1f", a,b, a*b);
//				case 4:
//					printf("\n%.1f/%.1f=%.2f", a,b, a/b);
//				break;
//				default:
//					printf("Ban nhap sai");
//					break;
//				}
//			break;
//		case 2:
//			printf("\nNhap 3 so a,b,c:");
//			scanf("%f%f%f", &a,&b,&c);
//			float max=a;
//			if(b>max)
//			{max=b;}
//			if(c>b)
//			{max=c;}
//			printf("so lon nhat la %.1f", max);
//			break;
//		case 3:
//			printf("Nhap vao so nguyen duong:");
//			scanf("%d", &n);
//			if(n>0){
//			d=sqrt(n);
//			if((d*d)==n)
//			printf("so ban da nhap vao la so chinh phuong");
//			else
//			printf("so ban da nhap vao ko phai la so chinh phuong");
//			}
//			break;
//		case 4:
//			printf("Thoat chuong trinh....");
//			break;
//		default:
//			printf("ban nhap sai");
//		break;
//		}	
//	return 0;
//}

////btap
int main ()
{
	int opt, subopt, a,b,c;
	printf("---------------------------\n");
	printf("----------MENU-------------\n");
	printf("---1.Tim bang cuu chuong---\n");
	printf("---2.Tim thu ngay----------\n");
	printf("---3.Tim canh cua tam giac-\n");
	printf("---4.Thoat chuong trinh----\n");
	printf("Moi ban lua chon \n");
	scanf("%d", &opt);
	switch(opt){
		case 1:
			printf("Nhap 1 so bat ky \n",a);
			scanf("%d", &a);
				printf("%d*1=%d\n", a, a*1);
				printf("%d*2=%d\n", a, a*2);
				printf("%d*3=%d\n", a, a*3);
				printf("%d*4=%d\n", a, a*4);
				printf("%d*5=%d\n", a, a*5);
				printf("%d*6=%d\n", a, a*6);
				printf("%d*7=%d\n", a, a*7);
				printf("%d*8=%d\n", a, a*8);
				printf("%d*9=%d\n", a, a*9);
				printf("%d*10=%d\n", a,a*10);
				break;
		case 2:
			printf("Nhap vao 1 so bat ky\n",b);
			scanf("%d", &b);
			switch(b){
			case 0:
				printf("chu nhat");
				break;
			case 1:
				printf("thu 7");
				break;
			case 2:
				printf("thu 2");
				break;
			case 3:
				printf("thu 3");
				break;
			case 4:
				printf("thu 4");
				break;
			case 5:
				printf("thu 5");
				break;
			case 6:
				printf("thu 6");
				break;	
		}
		case 3:
			printf("nhap 3 so\n");
			scanf("%d%d%d", &a,&b,&c);
			if( a<b+c && b<a+c && c<a+b ){
        		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            		printf("Day la tam giac vuong");
        		else if(a==b && b==c)
           		 		printf("Day la tam giac deu");
        		else if(a==b || a==c || b==c)
           		 		printf("Day la tam giac can");
       			else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
           		 		printf("Day la tam giac tu");
        		else
        	    		printf("Day la tam giac nhon");
   			 }
    		else
      		    printf("Ba canh a, b, c khong phai la ba canh cua mot tam giac");
      	case 4:
      		printf("Thoat chuong trinh....");
			break;
			default:
			printf("ban nhap sai");
			break;
	}	
	return 0;
}
	
		
		
		
		

	

