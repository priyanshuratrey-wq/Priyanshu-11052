#include <stdio.h>
int main() {
    float units, total_bill, surcharge = 0;

    // Step 1 & 2: Ask user for input and store it
    printf("Enter the total number of units consumed: ");
    scanf("%f", &units);

    // Step 3, 4, 5 & 6: Else-if ladder for slab calculation
    if (units <= 100) {
        total_bill = units * 5;
    } 
    else if (units <= 200) {
        // First 100 units at $5 + remaining units at $7
        total_bill = (100 * 5) + ((units - 100) * 7);
    } 
    else {
        // First 100 at $5, next 100 at $7, remaining at $10
        total_bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    // Step 7 & 8: Add extra charges (10% surcharge)
    surcharge = total_bill * 0.10;
    
    // Step 9: Store final amount
    float final_amount = total_bill + surcharge;

    // Step 10: Print the result
    printf("\n--- Electricity Bill ---\n");
    printf("Units Consumed: %.2f\n", units);
    printf("Base Charges: $%.2f\n", total_bill);
    printf("Surcharge (10%%): $%.2f\n", surcharge);
    printf("Total Bill Amount: $%.2f\n", final_amount);

    return 0;
}