#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    printf("Variaveis: \n");
    printf("a = %d\n", a); // a = 1
    printf("b = %d\n", b); // b = 2
    printf("c = %d\n", c); // c = 3
    printf("d = %d\n", d); // d = 4
    printf("e = %d\n\n", e); // e = 5

    printf("a * b / c = %.3f\n", (float)a * b / c);                     // a = 1, b = 2, c = 3, d = 4, e = 5
    printf("a * b %% c + 1 = %d\n", a * b % c + 1);                     // a = 1, b = 2, c = 3, d = 4, e = 5
    printf("++a * b - c-- = %d\n", ++a * b - c--);                      // a = 2, b = 2, c = 2, d = 4, e = 5
    printf("7 - - b * ++d = %d\n", 7 - - b * ++d);                      // a = 2, b = 2, c = 2, d = 5, e = 5
    printf("a / b / c = %.3f\n", (float)a / b / c);                     // a = 2, b = 2, c = 2, d = 5, e = 5
    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);         // a = 2, b = 2, c = 2, d = 4, e = 5
    printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);         // a = 2, b = 2, c = 2, d = 4, e = 5
    printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c); // a = 2, b = 2, c = 2, d = 4, e = 6
    printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));             // a = 3, b = 2, c = 2, d = 4, e = 6

    printf("\nVariaveis: \n");
    printf("a = %d\n", a); // a = 3
    printf("b = %d\n", b); // b = 2
    printf("c = %d\n", c); // c = 2
    printf("d = %d\n", d); // d = 4
    printf("e = %d\n", e); // e = 6
    return 0;
}