#include <stdio.h>

int main()
{
    float cart, discount = 0, primeDiscount = 0;
    float finalAmount, delivery, total;
    char prime;

    printf("Enter cart value: ");
    scanf("%f", &cart);

    printf("Are you a Prime member (Y/N): ");
    scanf(" %c", &prime);

    if (cart >= 10000)
    {
        discount = cart * 0.30;
    }
    else if (cart >= 5000)
    {
        discount = cart * 0.20;
    }
    else if (cart >= 2000)
    {
        discount = cart * 0.10;
    }

    finalAmount = cart - discount;

    if (prime == 'Y')
    {
        primeDiscount = finalAmount * 0.05;
        finalAmount = finalAmount - primeDiscount;
    }

    if (prime == 'Y')
    {
        delivery = 0;
    }
    else
    {
        if (finalAmount > 1000)
        {
            delivery = 0;
        }
        else
        {
            delivery = 80;
        }
    }

    total = finalAmount + delivery;

    printf("\n----- SHOPPING BILL -----\n");
    printf("Cart value       = %.2f\n", cart);
    printf("Discount         = %.2f\n", discount);
    printf("Prime discount   = %.2f\n", primeDiscount);
    printf("Final item amount= %.2f\n", finalAmount);
    printf("Delivery charge  = %.2f\n", delivery);
    printf("Grand total      = %.2f\n", total);

    return 0;
}
