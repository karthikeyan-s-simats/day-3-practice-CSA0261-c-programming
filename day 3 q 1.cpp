#include <stdio.h>

int cube(int num); // function prototype

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube of %d is %d", num, cube(num));

    return 0;
}

int cube(int num) {
    return num*num*num;
}

