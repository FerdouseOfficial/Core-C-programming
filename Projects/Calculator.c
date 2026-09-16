// #include <stdio.h>

// int main() {

//     char operator = '\0';
//     double num1 = 0.0;
//     double num2 = 0.0;
//     double result = 0.0;

//     printf("Enter the first number: ");
//     scanf("%lf", &num1);
//     printf("Enter the Operation: (+, -, *, /) ");
//     scanf(" %c", &operator);
//     printf('Enter the Second number: ');
//     scanf("%lf", &num2);


//     if(operator == '+') {
//         result = num1 + num2;
//         printf("Num1 + Num 2 is = %lf", result);
//     } 
//     else if(operator == '-') {
//         result = num1 - num2;
//         printf("Num1 - Num 2 is = %lf", result);
//     } 
//     else if(operator == '*') {
//         result = num1 * num2;
//         printf("Num1 * Num 2 is = %lf", result);
//     }
//     else if(operator == '/') {
//         result = num1 / num2;
//         printf("Num 1 / Num 2 is = %lf", result);
//     }

//     return 0;
// }



#include <stdio.h>

int main() {


    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;


    printf("Enter the fist number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);


    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default: 
            printf("Please try to enter a valid operation ");
    }

    printf("Result %.4lf", result);
    
    return 0;
}