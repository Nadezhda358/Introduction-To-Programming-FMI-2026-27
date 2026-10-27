#include <iostream>
using namespace std;

int decimalToBinary(int decimalNum)
{
    int quotient = decimalNum / 2;
    int remainder = decimalNum % 2;
    if (quotient == 0) 
    {
        return remainder;
    }
    
    return decimalToBinary(quotient) * 10 + remainder;
}
int pow(int num, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= num;
    }
    return result;
}

int binaryToDecimal(int binaryNum, int powerOfTwo = 0)
{
    int remainder = binaryNum % 10;
    int quotient = binaryNum / 10;
    int powResult = pow(2, powerOfTwo);
    int result = remainder * powResult;
    if (quotient == 0)
    {
        return result;
    }
    return result + binaryToDecimal(quotient, ++powerOfTwo);
}

bool isBinary(int num) 
{
    while (num > 0)
    {
        if (num % 10 != 1 && num % 10 != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    char systemChoice;
    int number;
    cin >> systemChoice >> number;

    if (number < 0 || (systemChoice == 'b' && number > 500000) || (systemChoice == 'd' && !isBinary(number)))
    {
        cout << "invalid input";
        return 1;
    }

    switch (systemChoice) 
    {
        case 'b': cout << decimalToBinary(number); break;
        case 'd': cout << binaryToDecimal(number); break;
        default:
        {
            cout << "invalid input";
            return 1;
        };
    }
    
    return 0;
}
