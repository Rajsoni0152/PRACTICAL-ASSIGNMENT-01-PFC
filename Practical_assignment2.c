#include <stdio.h>

int main() {
    char ch;
    int days;
    float rate, fine;

    // Input
    printf("Enter student initial: ");
    scanf(" %c", &ch);

    printf("Enter overdue days: ");
    scanf("%d", &days);

    printf("Enter fine rate per day: ");
    scanf("%f", &rate);

    // Fine calculation
    fine = days * rate;

    // Output (with vertical tab \v)
    printf("Library Receipt\v");
    printf("Member Initial: %c\n", ch);
    printf("Days: %05d\n", days);
    printf("Fine: %.2f INR\n", fine);

    return 0;
}