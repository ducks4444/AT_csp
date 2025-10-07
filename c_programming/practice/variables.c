// AT 6th
 #include <stdio.h>

 int main (void) {
   char name [20];
   int number;
   float gpa;
   char breakfast [20];
   char color [20];
   char school [20];
   int year;
   char eye_color [10];
   int age;
   char subject [20];

   // ask the user for the following information and store it in a variable
   printf("What is your name? ");
   scanf("%s", name);
   printf("What is a number between 1 and 10? ");
   scanf("%d", &number);
   printf("What is your GPA? ");
   scanf("%f", &gpa);
   printf("What did you have for breakfast? ");
   scanf("%s", breakfast);
   printf("What is your favorite color? ");
   scanf("%s", color);
   printf("What is the name of your school? ");
   scanf("%s", school);
   printf("What year is it? ");
   scanf("%d", &year);
   printf("What is your eye color? ");
   scanf("%s", eye_color);
   printf("What is your age? ");
   scanf("%d", &age);
   printf("What is your favorite subject in school? ");
   scanf("%s", subject);

   // print the information back out to the user
   printf("Name: %s\n", name);
   printf("Lucky Number (1-10): %d\n", number);
   printf("GPA: %.2f\n", gpa);
   printf("Breakfast: %s\n", breakfast);
   printf("Favorite Color: %s\n", color);
   printf("School Name: %s\n", school);
   printf("Current Year: %d\n", year);
   printf("Eye Color: %s\n", eye_color);
   printf("Age: %d\n", age);
   printf("Favorite Subject: %s\n", subject);

   return 0;
}