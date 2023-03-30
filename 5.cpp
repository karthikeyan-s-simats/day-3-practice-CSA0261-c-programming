#include <stdio.h>
#include <math.h>

int isPrime(int n);
int isArmstrong(int n);
int isPerfect(int n);

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if(isPrime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    if(isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    if(isPerfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
    return 0;
}


int isPerfect(int n) {
    int i, sum = 0;
    for(i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}

