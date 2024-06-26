#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%d\n", coins);
}

int get_cents(void)
{
    // TODO
    
    	int cents;
    	do{
    		printf("Cents owed:");
    		scanf("%d",&cents);
		}while(cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters = 0;
    while(cents >= 25)
    {
    	cents = cents - 25;
    	quarters++;
	}
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = 0;
    while (dimes >= 10)
    {
    	cents = cents - 10;
    	dimes++;
	}
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = 0;
    while(nickels >= 5)
    {
    	cents = cents - 5;
    	nickels++;
	}
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 0;
    while(pennies >= 1)
    {
    	cents = cents - 1;
    	pennies++;
	}
    return pennies;
}
