#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = true;

    if(isStudent) {
        printf("You get a studnet discount of 10%\n");
        price *= 0.9;
    }

    printf("The pricie of a ticket is: $%.2f\n", price);

    return 0;
}