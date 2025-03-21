#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Введите целое число: ");
    scanf("%d", &num);
    
    bool is_even = (num % 2 == 0);
    
    const char* result = is_even ? "число четное" : "число нечетное";
    
    printf("%s\n", result);
    return 0;
}
