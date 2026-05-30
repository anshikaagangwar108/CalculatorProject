#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int choice;
float num1, num2, result;

printf("===== Advanced Calculator =====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Modulus\n");
printf("6. Percentage\n");
printf("7. Square\n");
printf("8. Square Root\n");
printf("9. Power\n");

printf("Enter your choice (1-9): ");
scanf("%d", &choice);

if(choice == 7 || choice == 8) {
printf("Enter a number: ");
scanf("%f", &num1);
} else {
printf("Enter first number: ");
scanf("%f", &num1);

printf("Enter second number: ");
scanf("%f", &num2);
}

switch (choice) {

case 1:
result = num1 + num2;
printf("Result: %.2f\n", result);
break;

case 2:
result = num1 - num2;
printf("Result: %.2f\n", result);
break;

case 3:
result = num1 * num2;
printf("Result: %.2f\n", result);
break;

case 4:
if(num2 != 0) {
result = num1 / num2;
printf("Result: %.2f\n", result);
} else {
printf("Error: Division by zero is not allowed.\n");
}
break;

case 5:
if((int)num2 != 0) {
result = (int)num1 % (int)num2;
printf("Result: %.2f\n", result);
} else {
printf("Error: Modulus by zero is not allowed.\n");
}
break;

case 6:
if(num2 != 0) {
result = (num1 / num2) * 100;
printf("Percentage: %.2f\n", result);
} else {
printf("Error: Division by zero is not allowed.\n");
}
break;

case 7:
result = num1 * num1;
printf("Square: %.2f\n", result);
break;

case 8:
if(num1 >= 0) {
result = sqrt(num1);
printf("Square Root: %.2f\n", result);
} else {
printf("Error: Square root of a negative number is not allowed.\n");
}
break;

case 9:
result = pow(num1, num2);
printf("Result: %.2f\n", result);
break;

default:
printf("Invalid choice. Please select a number between 1 and 9.\n");
}

return 0;
}