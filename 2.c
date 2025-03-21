#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    bool is_even = (num % 2 == 0);
    
    // 1 для четного числа, 0 для нечетного
    printf("%d\n", is_even);
    return 0;
}
