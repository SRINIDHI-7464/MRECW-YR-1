#include <stdio.h>

// Function to return the greatest of four integers
int max_of_four(int a, int b, int c, int d) {
    int max = a;  // Assume a is the largest initially
    
    // Compare with b
    if (b > max) {
        max = b;
    }
    
    // Compare with c
    if (c > max) {
        max = c;
    }
    
    // Compare with d
    if (d > max) {
        max = d;
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    
    // Read four integers from input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    // Call the function and print the result
    printf("%d\n", max_of_four(a, b, c, d));
    
    return 0;
}
