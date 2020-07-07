#include <stdio.h>
#include <stdbool.h>

void printArrayReverse(int *array, int numberOfElements, bool isHex)
{
    for (int i = (numberOfElements - 1); i >= 0; i--)
    {
        if (isHex)
        {
            printf("%c", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
    }
    printf("\n");
}
/**
 * Decimal to Hexadecimal
 * 1. Store the remainder when the number is divided by 16 in a temporary variable temp.
 *      If temp is less than 10, insert (48 + temp) in a character array 
 *       otherwise if temp is greater than or equals to 10, insert (55 + temp) in the character array.
 * 2. Divide the number by 16 now
 * 3. Repeat the above two steps until the number is not equal to 0.
 * 4. Repeat the above two steps until the number is not equal to 0.
*/
void decimalToHexadecimal(int number)
{
    int numberArray[20];
    int i = 0;
    int quotient, remainder;
    while (number > 0)
    {
        quotient = number / 16;
        remainder = number % 16;
        if (remainder < 10)
        {
            remainder += 48;
        }
        else
        {
            remainder += 55;
        }
        numberArray[i] = remainder;
        i += 1;
        number = quotient;
    }
    printf("Decimal to Hexadecimal of %d = ", number);
    printArrayReverse(numberArray, i, true);
}

/**
 * Decimal to Octal
 * 1. Input the decimal number.
 * 2. Divide the decimal number by 8.
 * 3. Store the remainder in the array.
 * 4. Repeat steps 2 and 3 until the number can be divided.
 * 5. Print the reverse of the remainder, which is the octal equivalent of the decimal number.
*/
void decimalToOctal(int number)
{
    int numberArray[20];
    int i = 0;
    int quotient, remainder;
    while (number > 0)
    {
        quotient = number / 8;
        remainder = number % 8;
        numberArray[i] = remainder;
        number = quotient;
        i += 1;
    }
    printf("Decimal to Octal of %d = ", number);
    printArrayReverse(numberArray, i, false);
}

/**
 * Decimal to Binary
 * 1. Store the remainder when the number is divided by 2 in an array.
 * 2. Divide the number by 2
 * 3. Repeat the above two steps until the number is greater than zero.
 * 4. Print the array in reverse order now.
*/
void decimalToBinary(int number)
{
    int numberArray[20];
    int i = 0;
    int quotient, remainder;
    while (number > 0)
    {
        quotient = number / 2;
        remainder = number % 2;
        numberArray[i] = remainder;
        number = quotient;
        i += 1;
    }
    printf("Decimal to Octal of %d = ", number);
    printArrayReverse(numberArray, i, false);
}

int main()
{
    int number;
    printf("Enter the number::: ");
    scanf("%d", &number);
    decimalToHexadecimal(number);
    decimalToOctal(number);
    decimalToBinary(number);
    return 0;
}