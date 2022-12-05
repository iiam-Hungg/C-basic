#include <stdio.h>
int main()
{
    int t, t500, t200, t100, t50, t20, t10;
    printf("Nhap so tien ma ban muon doi: ");
    scanf("%d", &t);
    

    t500=t/500000;
    t=t-500000*t500;
    t200=t/200000;
    t=t-200000*t200;
    t100=t/100000;
    t=t-100000*t100;
    t50=t/50000;
    t=t-50000*t50;
    t20=t/20000;
    t=t-20000*t20;
    t10=t/10000;
    
    printf("\nSo to cac loai menh gia ma ban se nhan:");
    printf("\nMenh gia 500.000: %d",t500);
    printf("\nMenh gia 200.000: %d",t200);
    printf("\nMenh gia 100.000: %d",t100);
    printf("\nMenh gia 50.000: %d",t50);
    printf("\nMenh gia 20.000: %d",t20);
    printf("\nMenh gia 10.000: %d",t10);
    printf("\nTong so to tien ban se nhan: %d",t10+t20+t50+t100+t200+t500);

return 0;
}
