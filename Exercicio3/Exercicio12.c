#include <stdio.h>

int main(){
    int i;

    printf("Tabuada do 8:\n\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", 8, i, 8 * i);
    }

    return 0;
}