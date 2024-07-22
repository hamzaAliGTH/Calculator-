
#include <iostream>
using namespace std;
float add(int a, int b)
{
    return a + b;
}
float subtract(int a, int b)
{
    return a - b;
}
float multiply(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    return a / b;
}
int main()
{
    int choice;
    int num1, num2;

    do
    {

        cout << "***MENU***" << endl;
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter Choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter 1st number = ";
            cin >> num1;
            cout << "Enter 2nd number = ";
            cin >> num2;
            cout << "The result is = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Enter 1st number = ";
            cin >> num1;
            cout << "Enter 2nd number = ";
            cin >> num2;
            cout << "The result is = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Enter 1st number = ";
            cin >> num1;
            cout << "Enter 2nd number = ";
            cin >> num2;
            cout << "The result is = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter 1st number = ";
            cin >> num1;
            cout << "Enter 2nd number = ";
            cin >> num2;
            cout << "The result is = " << divide(num1, num2) << endl;
            break;

        default:

            break;
        }
    } while (choice != 5);
    cout << "Exiting Program......." << endl;

    return 0;
}