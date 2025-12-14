#include <stdio.h>

int main() {
    float P1, P2,P3,total;
    printf("ใส่ราคาสินค้าชิ้นที่ 1  : ");
    scanf("%f", &P1);
    total = P1 ;
    printf("%.2f\n", (total - (total*0.05))*1.07);

    printf("ใส่ราคาสินค้าชิ้นที่ 2  : ");
    scanf("%f", &P2);
    total = P1+P2;
    printf("%.2f\n", (total - (total*0.15))*1.07);

    printf("ใส่ราคาสินค้าชิ้นที่ 3  : ");
    scanf("%f", &P3);
     total = P1+P2+P3;
    printf("%.2f\n", (total - (total*0.30))*1.07);
    return 0;
}