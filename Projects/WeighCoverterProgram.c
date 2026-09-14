#include <stdio.h>

int main() {

    // WEIGHT CONVERTER PROGRAM
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms");
    printf("Enter Your choice (1/2): "); 

    if (choice == 1)
    {
        // Kilograms to Pounds
        printf("Enter the weight in Kilograms");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f Pounds", kilograms, pounds);
    }
    

    return 0;
}