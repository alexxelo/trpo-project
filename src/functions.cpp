#include "functions.h"

int Menu::sum(int a, int b)
{
    return a + b;
}

int Menu::subtraction(int a, int b)
{
    return a - b;
}

int Menu::multiplication(int a, int b)
{
    return a * b;
}

int Menu::division(int a, int b)
{
    return a / b;
}
int Menu::powerOfNumber(int a, int b)
{
    return pow(a, b);
}

int Menu::input()
{
    int a, b;

    int choose1;
    system("cls");

    cout << "1. Sum" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power of number " << endl;
    cout << "6. Exit" << endl;
    cout << ">> ";
    cin >> choose1;

    if (choose1 < 0 || choose1 > 7) {
        cout << "Invalid number!" << endl;
        system("pause");
        input();
    } else {
        switch (choose1) {
        case 1: {
            cout << "Input numbers: ";
            cin >> a;
            cin >> b;
            cout << "Result: " << a << " + " << b << " = " << sum(a, b) << endl;
            system("pause");
            input();
            break;
        }
        case 2: {
            cout << "Input numbers: ";
            cin >> a;
            cin >> b;
            cout << "Result: " << a << " - " << b << " = " << subtraction(a, b) 
                 << endl;
            system("pause");
            input();
            break;
        }
        case 3: {
            cout << "Input numbers: ";
            cin >> a;
            cin >> b;
            cout << "Result: " << a << " * " << b << " = "
                 << multiplication(a, b) << endl;
            system("pause");
            input();
            break;
        }
        case 4: {
            cout << "Input numbers: ";
            cin >> a;
            cin >> b;
            if (b <= 0) {
                cout << "division by 0 is not possible" << endl;
                system("pause");
                input();

            } else {
                cout << "Result: " << a << " \\ " << b << " = " << division(a, b) 
                     << endl;
                system("pause");
                input();
            }
            break;
        }
        case 5: {
            cout << "Input numbers: ";
            cin >> a;
            cin >> b;
            if (b < 0) {
                cout << "i can't do it sorry" << endl;
                system("pause");
                input();
            }
            cout << "Result: " << a << " ^ " << b << " = "
                 << powerOfNumber(a, b) << endl;
            system("pause");
            input();
            break;
        }
        case 6: {
            break;
        }
        default:
            break;
        }
    }
    return 0;
}

