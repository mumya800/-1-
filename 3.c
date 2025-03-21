#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // если хотя бы одно число 0, значение = 1
    int zero = (a == 0 || b == 0 || c == 0);
    
    int number_sign = (a > 0) * (b > 0) * (c > 0);
    
    int product_sign = zero * 1 + number_sign * 2 - 1;
    
    printf("%d\n", product_sign);
    return 0;
}
