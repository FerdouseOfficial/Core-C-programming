// #include <stdio.h>

// int main() {

//     // Conditionals

//     int age = 21;

//     if(age >= 18){
//         printf("You are an Adult");
//     }
//     else if (age < 0) {
//         printf("You haven't been born yet");
//     }
//     else if (age == 0 ){
//         printf("You are a new born");
//     }
//     else{
//         printf("You are a child ");
//     }

//     return 0;
// }



#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // bool isStudent = false;

    // if(isStudent == true){
    //     printf("You are a student");
    // }
    // else{
    //     printf("You are NOT a studnet");
    // }

    char name[50] = "";

    printf("Enter Your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0) {
        printf("You did not enter your name ");
    }
    else{
        printf("Hello %s", name);
    }

    return 0;
}