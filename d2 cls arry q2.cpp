#include <stdio.h>

int findOddElement(int arr[], int n) {
    int i, oddElement = 0;
    
    for (i = 0; i < n; i++) {
        oddElement ^= arr[i]; // XOR operation with all elements
    }
    
    return oddElement;
}

int main() {
    int arr[] = {2, 5, 3, 5, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int oddElement = findOddElement(arr, n);
    
    printf("The odd element in the array is: %d", oddElement);
    
    return 0;
}


