#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int amount_to_pay;

    if (B >= A) {
        amount_to_pay = 0;        
    } else {
        amount_to_pay = A - B;   
    }

    printf("%d", amount_to_pay);

    return 0;
}