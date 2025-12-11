#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Jako";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.1f\n", price1);
    printf("%.2f\n", price2);
    printf("%.3f\n", price3);

    return 0;
}