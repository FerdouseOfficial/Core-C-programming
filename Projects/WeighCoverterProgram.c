// #include <stdio.h>

// int main() {

//     int choice = 0;
//     float pounds = 0.0f;
//     float kilograms = 0.0f;

//     printf("Weight Converstion Calculator\n");
//     printf("1. Kilograms to Pounds\n");
//     printf("2. Pounds to Kilograms\n");
//     printf("Enter Your Choice ( 1 or 2): ");
//     scanf("%d", &choice);

//     // Conditions 
//     if(choice == 1) {
//         // Kilograms to Pounds
//         printf("Enter the weight in kilograms: ");
//         scanf("%f", &kilograms);
//         pounds = kilograms * 2.20462;
//         printf("%.2f kilograms is equals to %.2f Pounds\n", kilograms, pounds);
//     } 
//     else if (choice == 2)
//     {
//         // Pounds to Kilograms
//         printf("Enter the weight in Pounds: ");
//         scanf("%f", &pounds);
//         kilograms = pounds / 2.20462;
//         printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
//     }
//     else {
//         printf("Invalid Choice! Please enter 1 or 2\n");
//     } 
    

//     return 0;
// }




#include <stdio.h>

int main() {

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;

    printf("Weight Conversion Program\n");
    printf("1. Pounds to kilograms\n");
    printf("2. Kilograms to Pounds\n");
    printf("Enter Your choice : ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Pounds to kilgorms 
        printf("Enter weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms", pounds, kilograms);
    }
    else if( choice == 2) {
        // Kilograms to Pounds 
        printf("Enter weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equals to %.2f pounds", kilograms, pounds);
    }
    else{
        printf("Enter Invalid Number! Please Enter 1 or 2 ");
    }

    return 0;
}