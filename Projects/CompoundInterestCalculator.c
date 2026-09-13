#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND INTEREST CALCULATOR

    double principle = 0.0;
    double rate =  0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Calculation");

    printf("Enter the Principle (P): ");
    scanf("%lf", &principle);

    printf("Enter the Interest rate (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of Years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principle * pow(1 + rate * timesCompounded, timesCompounded * years);
    printf("After %d years, the total  will be $%.2lf", years, total);


    return 0;
}


// ------------------------------------------------------------ Formula ============================================================================

// total = principal * pow(1 + rate / timesCompounded, timesCompounded * year )

//  A = P(1+ r/n) powerof(nt)