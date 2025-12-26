#include <stdio.h>

int main() {
    float num;

    // Input
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("\n===========================================\n");
    printf("  Chef Numerico’s Float Format Demo  \n");
    printf("===========================================\n\n");

    printf("Original number: %f\n\n", num);

    printf("1. %%f  -> Default float format\n");
    printf("   %f\n\n", num);

    printf("2. %%.1f -> 1 digit after decimal\n");
    printf("   %.1f\n\n", num);

    printf("3. %%.2f -> 2 digits after decimal\n");
    printf("   %.2f\n\n", num);

    printf("4. %%.3f -> 3 digits after decimal\n");
    printf("   %.3f\n\n", num);

    printf("5. %%10.2f -> Width 10, 2 decimals (right aligned)\n");
    printf("   |%10.2f|\n\n", num);

    printf("6. %%-10.2f -> Width 10, 2 decimals (left aligned)\n");
    printf("   |%-10.2f|\n\n", num);

    printf("7. %%e  -> Scientific notation (exponential form)\n");
    printf("   %e\n\n", num);

    printf("8. %%g  -> Automatic choice (normal or scientific)\n");
    printf("   %g\n\n", num);

    printf("===========================================\n");
    printf("Thank you for watching Chef Numerico’s Show! \n");
    printf("===========================================\n");

    return 0;
}