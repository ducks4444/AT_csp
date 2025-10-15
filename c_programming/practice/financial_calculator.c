// AT 6th fincial calculator

#include <stdio.h>

int main(void) {


    float income, rent, utilities, groceries, transportation;
    float rent_percent, utilities_percent, groceries_percent, transportation_percent;
    float savings, savings_percent, spending_money;

    
    printf("What is your monthly income: ");
    scanf("%f", &income);
    printf("What is your monthly rent/mortgage: ");
    scanf("%f", &rent);
    printf("What is your monthly utilities: ");
    scanf("%f", &utilities);
    printf("What is your monthly groceries: ");
    scanf("%f", &groceries);
    printf("What is your monthly transportation: ");
    scanf("%f", &transportation);

    rent_percent = (rent / income) * 100;
    utilities_percent = (utilities / income) * 100;
    groceries_percent = (groceries / income) * 100;
    transportation_percent = (transportation / income) * 100;
    savings_percent = 10.0; 
    savings = (savings_percent / 100) * income;
    spending_money = income - (rent + utilities + groceries + transportation + savings);

    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, transportation_percent);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", savings, savings_percent);
    printf("You have $%.2f of spending money each month!\n", spending_money);

    return 0;
}