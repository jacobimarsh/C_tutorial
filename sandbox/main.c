#include <stdio.h>

int main() {

    // Test comment 
    /* Test comment 2
    Test comment 3!
    */

    int age = 88; 
    int year = 2025;
    int quantity = 5;
    
    printf("You are %d years old\n", age);
    printf("You are %d years old in the year %d\n", age, year);
    printf("You ordered %d items\n", quantity - 1);

    float gpa = 5;
    
    printf("Your GPA is %.2f\n", gpa);

    float price = 19.99;
    printf("The price is $%.0f\n", price);

    float temperature = 25.7;
    printf("The temperature is %.1f degrees\n", temperature);

    double pi = 3.14159;
    double e = 2.71828;
    printf("The value of pi is %.10lf\n", pi);
    printf("The value of e is %.10lf\n", e);

    return 0;
}