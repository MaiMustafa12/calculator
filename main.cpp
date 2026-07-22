#include <iostream>
using namespace std;

int main()
{
    int choice;
    double firstNumber, secondNumber;

    while(true)
    {
        cout << "\n===== Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Choose an option: ";
        cin >> choice;

        if(choice == 5)
        {
            cout << "Goodbye!";
            break;
        }

        cout << "Enter first number: ";
        cin >> firstNumber;

        cout << "Enter second number: ";
        cin >> secondNumber;

        switch(choice)
        {
            case 1:
                cout << "Result = " << firstNumber + secondNumber;
                break;

            case 2:
                cout << "Result = " << firstNumber - secondNumber;
                break;

            case 3:
                cout << "Result = " << firstNumber * secondNumber;
                break;

            case 4:
                if(secondNumber != 0)
                    cout << "Result = " << firstNumber / secondNumber;
                else
                    cout << "Cannot divide by zero";
                break;

            default:
                cout << "Invalid choice";
        }
    }

    return 0;
}