# At 6th financial calculator update
def calculatePercentageOfIncome(expense, income):
    return (expense / income * 100)

def calculateSavingsAmount(income, savings_rate):
    return income * savings_rate

income = float(input("What is your monthly income: "))
rent = float(input("What is your monthly rent/mortgage: "))
utilities = float(input("What is your monthly utilities: "))
groceries = float(input("What is your monthly groceries: "))
transportation = float(input("What is your monthly transportation cost: "))
desired_savings_rate = float(input("What percentage of your income do you want to save each month (as a decimal): "))

total_expenses = rent + utilities + groceries + transportation
amount_to_save = calculateSavingsAmount(income, desired_savings_rate)
disposable_income = income - total_expenses - amount_to_save

print("\nYour total monthly expenses are: ${:.2f}".format(total_expenses))
print("Your rent is: {:.2f}% of your income".format(calculatePercentageOfIncome(rent, income)))
print("Your utilities are: {:.2f}% of your income".format(calculatePercentageOfIncome(utilities, income)))
print("Your groceries are: {:.2f}% of your income".format(calculatePercentageOfIncome(groceries, income)))
print("Your transportation is: {:.2f}% of your income".format(calculatePercentageOfIncome(transportation, income)))
print("You should save: ${:.2f} each month".format(amount_to_save))
print("This will leave you with a disposable income of: ${:.2f}".format(disposable_income))
