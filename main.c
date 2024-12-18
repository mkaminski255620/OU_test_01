#include <stdio.h>

int Policz(int a, int b) {
    return a+b;
}

int main(void) {
    int a = 2, b = 3;
    printf("Hello, World!\n");
    printf("W pierwszym branchu; 2 + 3 = %d",Policz(a, b));
    return 0;
}
