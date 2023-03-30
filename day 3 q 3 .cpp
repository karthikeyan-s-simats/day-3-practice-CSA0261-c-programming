
#include <stdio.h>

// Function to find the maximum of two numbers
int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

// Function to find the minimum of two numbers
int min(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int numCount, input, maxNum, minNum;
    
    printf("Enter the number of inputs: ");
    scanf("%d", &numCount);
    
    // Initialize maxNum and minNum with the first input
    printf("Enter number 1: ");
    scanf("%d", &input);
    maxNum = input;
    minNum = input;
    
    // Loop through the remaining inputs
    for (int i = 2; i <= numCount; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &input);
        
        // Update maxNum and minNum if necessary
        maxNum = max(maxNum, input);
        minNum = min(minNum, input);
    }
    
    printf("Maximum = %d\n", maxNum);
    printf("Minimum = %d\n", minNum);
    
    return 0;
}

