//swap two numbers using third variable
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);

    x=x+y;           //sum stored in x
    y=x-y;           //original x stored in y
    x=x-y;           //original y stored in x

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
