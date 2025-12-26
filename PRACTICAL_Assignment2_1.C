#include <stdio.h>

int main() {
    int A, B;
    
    // Taking input
    scanf("%d %d", &A, &B);
    
    // Checking weather condition
    if (B >= 3 * A) {
        printf("Rain");
    } else {
        printf("Dry");
    }
    
    return 0;
}