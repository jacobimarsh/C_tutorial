#include <stdio.h>
#include <stdbool.h>

int main() {

    char grade = 'A';
    char symbol = '#';
    char currency[] = "AUD";
    char email[] = "test@example.com";

    printf("Your grade is %c\n", grade);
    printf("Your fav symbol is %c\n", symbol);
    printf("The currency is %s\n", currency);
    printf("Your email is %s\n", email);

    // Bools

    bool isOnline = true;

    printf("Are you online? %d\n", isOnline);

    if(isOnline) {
        printf("You are online\n");
    } else {
        printf("You are offline\n");
    }

    bool isForSale = 0;
    if(isForSale) {
        printf("This item is for sale\n");
    } else {
        printf("This item is not for sale\n");
    }

    // variable = A reusable container for a value.
    //      Behaves as if it were the value it contains.
    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires fstdbool.h>)
    
    return 0;
}