#include <stdio.h>

int main() {

    // WEIGHT CONVERTER PROGRAM
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms");
    printf("Enter Your choice (1/2): "); 

    if (choice == 1)
    {
        // Kilograms to Pounds
        scanf("%f", &choice);
        printf("Enter the weight in Kilograms");
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f Pounds", kilograms, pounds);
    }
    else if(choice == 2) {
        printf("Enter the widht in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 2.20234;
        printf("%.2f Pound is equal to %.2f Kilograms", pounds, kilograms);
    }
    else{
        printf('Invalid choice! Please enter 1 or 2\n');
    }
    

    return 0;
}