#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
 
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    findPrimes(start, end);
    return 0;
}

