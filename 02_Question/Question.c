#include <stdio.h>
// Hint:- [condition ? true_value : false_value]

void enterValue(int *a, int *b)
{
  printf("Enter the first number: ");
  scanf("%d", a);
  printf("Enter the second number: ");
  scanf("%d", b);
}

// 1.	Write a C program to declare variables of different data types (int, float, char, double) and print their values.
void questionOne()
{
  int a = 10;
  float b = 3.14;
  char c = 'a';
  double d = 10.5;

  printf("a = %d\n", a);
  printf("b = %f\n", b);
  printf("c = %c\n", c);
  printf("d = %f\n", d);
}

// 2.	Write a program to perform basic arithmetic operations (+, -, *, /, %) on two numbers provided by the user.
void questionTwo()
{
  int a, b;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("Sum of %d and %d: %d\n", a, b, a + b);
  printf("Subtract of %d and %d: %d\n", a, b, b - a);
  printf("Product of %d and %d: %d\n", a, b, a * b);
  printf("Quotient of %d and %d: %d\n", a, b, a / b);
  printf("Remainder of %d and %d: %d\n", a, b, a % b);
}

// 3.	Write a program that demonstrates explicit type casting by converting a float to an int and printing both values
void questionThree()
{
  float f = 3.14;
  int i = (int)f;

  printf("Float value: %f\n", f);
  printf("Integer value: %d\n", i);
}

// 4.	Write a program to swap the values of two variables using a third temporary variable.
void questionFour()
{
  int a = 5, b = 10;

  int temp;
  printf("Before swapping:\n");
  printf("a = %d, b = %d\n", a, b);

  printf("After swapping:\n");
  temp = a;
  a = b;
  b = temp;

  printf("a = %d, b = %d\n", a, b);
}

// 5.	Write a program to swap the values of two variables without using a third variable, using arithmetic or bitwise operators.
void questionFive()
{
  int a = 5, b = 10;

  int temp;
  printf("Before swapping:\n");
  printf("a = %d, b = %d\n", a, b);

  printf("After swapping:\n");
  a = a + b; // 5 + 10 = 15
  b = a - b; // 15 - 10 = 5
  a = a - b; // 15 - 5 = 10

  printf("a = %d, b = %d\n", a, b);
}

// 6.	Write a program to take two integers as input and demonstrate the use of relational operators (==, !=, <, >, <=, >=).
void questionSix()
{
  int a, b;

  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("Comparison of %d and %d:\n", a, b);
  printf("Is a equal to b? %s\n", (a == b) ? "True" : "False");

  printf("Is a not equal to b? %s\n", (a != b) ? "True" : "False");

  printf("Is a less than b? %s\n", (a < b) ? "True" : "False");

  printf("Is a greater than b? %s\n", (a > b) ? "True" : "False");
}

// 7.	Write a program to demonstrate the use of logical operators (&&, ||, !) in different conditions.
void questionSeven()
{
  int a, b;
  enterValue(&a, &b);
  printf("You entered: %d and %d\n", a, b);

  printf("Logical AND: %s\n", (a && b) ? "True" : "False");
  printf("Logical OR: %s\n", (a || b) ? "True" : "False");
}

// 8.	Write a program that demonstrates the difference between pre-increment and post-increment operators.
void questionEight()
{
  int a = 5;

  printf("Pre-increment: %d\n", ++a);
  printf("Post-increment: %d\n", a++);
}

// 9.	Write a program to demonstrate the use of assignment operators (=, +=, -=, *=, /=, %=).
void questionNine()
{
  int a = 5, b = 10;

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("a += b: %d\n", a += b);
  printf("a -= b: %d\n", a -= b);
  printf("a *= b: %d\n", a *= b);
  printf("a /= b: %d\n", a /= b);
  printf("a %= b: %d\n", a %= b);
}

// 10.	Write a program to print the size of different data types (int, float, double, char) using the sizeof() operator.
void questionTen()
{
  printf("Size of int: %ld bytes\n", sizeof(int));
  printf("Size of float: %ld bytes\n", sizeof(float));
  printf("Size of double: %ld bytes\n", sizeof(double));
  printf("Size of char: %ld bytes\n", sizeof(char));
}

// 11.	Write a program that takes an integer as input and checks if it is even or odd using the modulus operator (%).
void questionEleven()
{
  int a, b;
  enterValue(&a, &b);
  printf("You entered: %d and %d\n", a, b);

  if (a % 2 == 0)
  {
    printf("%d is even\n", a);
  }
  else
  {
    printf("%d is odd\n", a);
  }
}

// 12.	Write a program to calculate simple interest using the formula SI = (P * R * T) / 100, where P, R, and T are provided by the user.
void questionTwelve()
{
  int p, r, t;
  printf("Enter the principal amount: ");
  scanf("%d", &p);
  printf("Enter the time period in years: ");
  scanf("%d", &t);
  printf("Enter the rate of interest: ");
  scanf("%d", &r);
  printf("You entered: %d and %d\n", p, r);

  float si = (p * r * t) / 100;
  printf("Simple Interest: %f\n", si);
}

// 13.	Write a program to find the roots of a quadratic equation using the formula (-b ± √(b² - 4ac)) / 2a.
void questionThirteen()
{
  //  TODO:- try it yourself
}

// 14.	Write a program to find the sum of digits of a given integer using the modulus (%) and division (/) operators.
void questionFourteen()
{
  //  TODO:- try it yourself
}

// 15. Write a program to convert temperature from Celsius to Fahrenheit using the formula F = (C * 9/5) + 32.
void questionFifteen()
{
  // TODO: - try it yourself
}

// 16. Write a program to calculate the perimeter and area of a rectangle, taking the length and width as input.
void questionSixteen()
{
  // TODO: - try it yourself
}

// 17. Write a program to demonstrate compound assignment operators (+=, -=, *=, /=) by performing operations on a variable.
void questionSeventeen()
{
  // TODO: - try it yourself
}

// 18. Write a program to calculate the Body Mass Index (BMI) of a person given their weight (in kg) and height (in meters) using the formula BMI = weight / (height * height).
void questionEighteen()
{
  // TODO: - try it yourself
}

// 19. Write a program to take a character as input and print its corresponding ASCII value using type conversion.
void questionNineteen()
{
  // TODO: - try it yourself
}

int main()
{
  // questionOne();
  // questionTwo();
  // questionThree();
  // questionFour();
  // questionFive();
  // questionSix();
  // questionSeven();
  // questionEight();
  // questionNine();
  // questionTen();
  // questionEleven();
  // questionTwelve();

  //  TODO:- try it yourself
  questionThirteen();
  questionFourteen();
  questionFifteen();
  questionSixteen();
  questionSeventeen();
  questionEighteen();
  questionNineteen();

  return 0;
}