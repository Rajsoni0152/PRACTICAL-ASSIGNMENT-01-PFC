#include <stdio.h>

int main() {
    printf("===============================================\n");
    printf("\t Welcome to Chef C's Magical Escape Show \n");
    printf("===============================================\n\n");

    printf("1. \\n  -> New Line\n");
    printf("This is line one.\nThis is line two (after new line)\n\n");

    printf("2. \\t  -> Horizontal Tab\n");
    printf("Name\tAge\tCity\nRiya\t20\tDelhi\n\n");

    printf("3. \\\\  -> Backslash\n");
    printf("Printing one backslash: \\\n\n");

    printf("4. \\\"  -> Double Quote\n");
    printf("Chef says: \"Coding is Magic!\"\n\n");

    printf("5. \\\'  -> Single Quote\n");
    printf("Chef whispers: \'Shh... It’s a secret!\'\n\n");

    printf("6. \\a  -> Alert (Beep Sound)\n");
    printf("Chef casts a magic spell \a\n\n");

    printf("7. \\b  -> Backspace\n");
    printf("Hello\b! (Backspace removed one letter)\n\n");

    printf("8. \\r  -> Carriage Return\n");
    printf("Old text will be replaced\rNEW LINE!\n\n");

    printf("9. \\f  -> Form Feed\n");
    printf("Page changing illusion starts here\f(You may not see the form feed)\n\n");

    printf("10. \\v -> Vertical Tab\n");
    printf("Line 1\vLine 2\vLine 3\n\n");

    printf("11. \\? -> Question Mark\n");
    printf("Can you see the question mark safely\\?\n\n");

    printf("===============================================\n");
    printf("\t Thank you for watching Chef C's Escape Show! \n");
    printf("===============================================\n");

    return 0;
}