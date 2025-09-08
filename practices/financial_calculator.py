# AT 6th financial calculator
def calculatePercentageOfIncome(expense, income):
    return round(expense / income * 100)

income = float(input("What is your monthly income: "))
rent = float(input("What is your monthly rent/mortgage: "))
utilities = float(input("What is your monthly utilities: "))
groceries = float(input("what is your monthly groceries: "))
transportation = float(input("What is your monthly transportation cost: "))
desired_savings_rate = float(input("What percentage of your income do you want to save each month (as a decimal): "))
total_expenses = rent + utilities + groceries + transportation
net_income = income - total_expenses
amount_to_save = income * desired_savings_rate
disposable_income = net_income - amount_to_save


print("\n\nYour total monthly expenses are: ${:.2f}".format(total_expenses))
print("Your rent is : ", calculatePercentageOfIncome(rent, income), "% of your income")
print("Your utilities are : ", calculatePercentageOfIncome(utilities, income), "% of your income")
print("Your groceries are : ", calculatePercentageOfIncome(groceries, income), "% of your income")
print("Your transportation is : ", calculatePercentageOfIncome(transportation, income), "% of your income")
print("You should save : ${:.2f} each month".format(amount_to_save))
print("This will leave you with a disposable income of: ${:.2f}".format(disposable_income))
