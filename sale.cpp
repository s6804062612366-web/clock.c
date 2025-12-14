#include <stdio.h>

int main() {
    float P1, P2,P3;;
    printf("ใส่ราคาสินค้าชิ้นที่ 1  : ");
    scanf("%f", &P1);
    printf("%2f\n", P1 - (P1*0.05));

    printf("ใส่ราคาสินค้าชิ้นที่ 2  : ");
    scanf("%f", &P2);
    printf("%2f\n", (P1+P2) - ((P1+P2)*0.15));

    printf("ใส่ราคาสินค้าชิ้นที่ 3  : ");
    scanf("%f", &P3);
    printf("%2f\n", (P1+P2+P3) - ((P1+P2+P3)*0.30));
    return 0;
}