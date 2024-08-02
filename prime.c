#include <stdio.h>   // Include standard input/output library
#include <stdbool.h> // Include library for using boolean types

int main() {
    int num, i;  // Declare variables: 'num' for storing the input number and 'i' for the loop counter
    printf("Enter the number: ");  // Prompt the user to enter a number
    scanf("%d", &num);             // Read the input number and store it in 'num'

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        printf("It is not a prime number: %d\n", num); // Print that numbers <= 1 are not prime
        return 0;  // Exit the program early since numbers <= 1 are not prime
    }

    bool prime = true; // Assume the number is prime until proven otherwise

    // Loop from 2 to num/2 to check for factors
    for (i = 2; i <= num / 2; i++) {
       // If 'num' is divisible by 'i', it is not a prime number
        if (num % i == 0) {
            prime = false; // Set 'prime' to false since a factor was found
            break;         // Exit the loop early as the number is not prime
        }
    }

    // After the loop, check the 'prime' flag
    if (prime) {
        printf("It is a prime number: %d\n", num); // If 'prime' is true, 'num' is a prime number
    } else {
        printf("It is not a prime number: %d\n", num); // If 'prime' is false, 'num' is not a prime number
    }

    return 0; // Return 0 to indicate successful execution
}

