#include <stdio.h>

// function declaration
int isEven(int num);

int main() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}

// function definition
int isEven(int num) {
    return num % 2 == 0;
}

