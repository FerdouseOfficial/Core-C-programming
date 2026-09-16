#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = true; // 20% discount


// student = $9;
// Senior = $8;
// Student + senior = $7;


    if(isStudent) {
        if(isSenior) {
            printf("You got a discount of 10%\n");
            printf("You got a senior discount of 20%\n");
            price *= 0.7;
        }
        else{
            printf("You get a studne discount of 10%\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior dicount of 20%\n");
            price *= 0.8;
        }
    }

    printf("The pricie of a ticket is: $%.2f\n", price);

    return 0;
}