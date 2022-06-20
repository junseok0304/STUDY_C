#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    int goods;
    double price;
    double total;

    printf("상품 개수:");
    scanf("%d", &goods);

    printf("상품 단가($):");
    scanf("%lf", &price);

    total = goods * price;
    printf("%d개 * $%g/개 = $%g", goods, price, total);

    return 0;
}

