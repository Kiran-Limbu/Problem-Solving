#include <stdio.h>

int addFun(int, int);
int subFun(int, int);
int multifyFun(int, int);
int divisionFun(int, int);

int main() {

    int userInput, num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multification\n");
    printf("4. Division\n");
    printf("> Choose the Operation to perform: ");
    scanf("%d", &userInput);

    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter sec number :");
    scanf("%d", &num2);

    switch (userInput)
    {
    case 1:
        printf("The Addition of %d and %d is %d", num1, num2, addFun(num1, num2));
        break;

    case 2:
        printf("The Sum of %d and %d is %d", num1, num2, subFun(num1, num2));
        break;
        
    case 3:
        printf("The Multify of %d and %d is %d", num1, num2, multifyFun(num1, num2));
        break;

    case 4:
        printf("The Division of %d and %d is %d", num1, num2, divisionFun(num1, num2));
        break;

    default:
    printf("Invalid Number\n");
        break;
    }

    return 0;
}

int addFun(int num1, int num2){
    return num1 + num2 ;
}

int subFun(int num1, int num2){
    return num1 - num2 ;
}

int multifyFun(int num1, int num2){
    return num1 * num2 ;
}

int divisionFun(int num1, int num2){
    return num1 / num2 ;
}

