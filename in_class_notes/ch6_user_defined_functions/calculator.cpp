#include <iostream>
using namespace std;

int getChoice();

int main() {
    int choice;
    double num1, num2;
    choice = getChoice(); //build the choice as a function
    while (choice!=5) {

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {           //switch to delegate the math operation
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero" << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        choice = getChoice();
    }

    return 0;
}

int getChoice()
{
        int c;
        cout << "Simple Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        if (c == 5) 
            cout << "Goodbye!" << endl;
        
        return c;
}
