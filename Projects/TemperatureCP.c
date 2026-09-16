#include <stdio.h>

int main() {

    char choice = ' ';
    float celcius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celcius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf(" %c", &choice);

    if(choice == 'C') {
        printf("Enter the tempertature in Celsius: ");
        scanf("%f", &celcius);
        fahrenheit = celcius * 9/5 + 32;
        printf("%.2f Celsius is equal to %.2f fahrenheit ", celcius, fahrenheit);
    }
    else if(choice == 'F') {
        printf("Enter the temparature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) / 1.8;
        printf("%.2f fahrenheit is equal to %.2f celsius", fahrenheit, celcius);
    }
    else{
        printf("Invalid Option! Please enter C or F");
    }
    

    return 0;
}