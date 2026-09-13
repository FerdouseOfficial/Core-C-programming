#include <stdio.h>

int main() {

    // Conditionals

    int age = 21;

    if(age >= 18){
        printf("You are an Adult");
    }
    else if (age < 0) {
        printf("You haven't been born yet");
    }
    else if (age == 0 ){
        printf("You are a new born");
    }
    else{
        printf("You are a child");
    }

    return 0;
}