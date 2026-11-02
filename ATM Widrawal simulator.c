#include <stdio.h>

int main()
{
    int pin, amount;
    int balance = 20000;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin == 4321)
    {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount <= 0)
        {
            printf("Amount must be positive");
        }
        else
        {
            if (amount % 100 != 0)
            {
                printf("Amount must be a multiple of 100");
            }
            else
            {
                if (amount > 10000)
                {
                    printf("Amount exceeds per-transaction limit of 10000");
                }
                else
                {
                    if (amount > balance)
                    {
                        printf("Insufficient balance");
                    }
                    else
                    {
                        balance = balance - amount;

                        printf("Dispensed %d\n", amount);
                        printf("Balance = %d", balance);
                    }
                }
            }
        }
    }
    else
    {
        printf("Incorrect PIN");
    }

    return 0;
}
