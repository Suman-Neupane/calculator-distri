#include <stdio.h>
#include "add.h"
#include "sub.h"

// Entry point of the calculator program
int main() {
    int x = 5, y = 3;
    printf("5 + 3 = %d\n", add(x, y));
    printf("5 - 3 = %d\n", sub(x, y));
    return 0;
}
