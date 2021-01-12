#include <cmath>
#include <iostream>
using namespace std;

class Menu {
public:
    int cont(){
        string yes = "a";
        cout << "Continue (y/n)?" << endl;
        cin >> yes;

        if(yes == "y"){
            input();
        } else {
            return 0;
        }
        return 0;
    }

    int sum(int a, int b){
        return a + b;
    }

    int subtraction(int a, int b){
        return a - b;
    }

    int multiplication(int a, int b){
        return a * b;
    }

    int division(int a, int b){
        return a / b;
    }

    int powerOfNumber(int a, int b){
        return pow(a, b);
    }

    int input(){
        int a, b;
        int choose;
        cout << "\nSelect operation:" << endl;
        cout << "1. Sum" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power of number " << endl;
        cout << "6. Exit" << endl;
        cout << ">> ";
        cin >> choose;

        if (choose < 0 || choose > 7) {
            cout << "Invalid number! Try again." << endl;
            input();
        } else {
            switch (choose) {
            case 1: {
                cout << "Input first number: ";
                cin >> a;
                cout << "Input second number: ";
                cin >> b;
                cout << "Result: " << a << " + " << b << " = " << sum(a, b) << endl;
                cont();
            break;
            }
            case 2: {
                cout << "Input first number: ";
                cin >> a;
                cout << "Input second number: ";
                cin >> b;
                cout << "Result: " << a << " - " << b << " = " << subtraction(a, b) 
                    << endl;
                cont();
                break;
            }
            case 3: {
                cout << "Input first number: ";
                cin >> a;
                cout << "Input second number: ";
                cin >> b;
                cout << "Result: " << a << " * " << b << " = "
                    << multiplication(a, b) << endl;
                cont();
                break;
            }
            case 4: {
                cout << "Input first number: ";
                cin >> a;
                cout << "Input second number: ";
                cin >> b;
                if (b <= 0) {
                    cout << "division by 0 is not possible" << endl;
                    cont();
                } else {
                    cout << "Result: " << a << " \\ " << b << " = " << division(a, b) 
                        << endl;
                    cont();
                }
                break;
            }
            case 5: {
                cout << "Input first number: ";
                cin >> a;
                cout << "Input second number: ";
                cin >> b;
                if (b < 0) {
                    cout << "i can't do it sorry" << endl;
                    cont();
                }
                cout << "Result: " << a << " ^ " << b << " = "
                    << powerOfNumber(a, b) << endl;
                cont();
                break;
            }
            case 6: {
                return 0;
                break;
            }
            default:
                break;
            }
        }
        return 0;
    }
};