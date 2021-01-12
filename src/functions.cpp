#include "functions.h"

int Menu::sum(int a, int b){
    return a + b;
}
int Menu::subtraction(int a, int b){
    return a - b;
}
int Menu::multiplication(int a, int b){
    return a * b;
}
int Menu::division(int a, int b){
    return a / b;
}
int Menu::powerOfNumber(int a, int b){
    return pow(a, b);
}

int Menu::input(){
    int a, b;
    int choose;

    cout << "\n1. Sum" << endl;
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

            cout << "Continue (y/n)?" << endl;
            string cont = "a";
            cin >> cont;
            if(cont == "y"){
                input();
            } else {
                break;
            }
        }
        case 2: {
            cout << "Input first number: ";
            cin >> a;
            cout << "Input second number: ";
            cin >> b;
            cout << "Result: " << a << " - " << b << " = " << subtraction(a, b) 
                 << endl;

            cout << "Continue (y/n)?" << endl;
            string cont = "a";
            cin >> cont;
            if(cont == "y"){
                input();
            } else {
                break;
            }
        }
        case 3: {
            cout << "Input first number: ";
            cin >> a;
            cout << "Input second number: ";
            cin >> b;
            cout << "Result: " << a << " * " << b << " = "
                 << multiplication(a, b) << endl;

            cout << "Continue (y/n)?" << endl;
            string cont = "a";
            cin >> cont;
            if(cont == "y"){
                input();
            } else {
                break;
            }
        }
        case 4: {
            cout << "Input first number: ";
            cin >> a;
            cout << "Input second number: ";
            cin >> b;
            if (b <= 0) {
                cout << "division by 0 is not possible" << endl;
                do {
                    cout << '\n' << "Press the Enter key to continue." << endl ;
                } while (cin.get() != '\n');

                input();
            } else {
                cout << "Result: " << a << " \\ " << b << " = " << division(a, b) 
                     << endl;
                
                cout << "Continue (y/n)?" << endl;
                string cont = "a";
                cin >> cont;
                if(cont == "y"){
                    input();
                } else {
                    break;
                }
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

                do {
                    cout << '\n' << "Press the Enter key to continue." << endl ;
                } while (cin.get() != '\n');

                input();
            }
            cout << "Result: " << a << " ^ " << b << " = "
                 << powerOfNumber(a, b) << endl;

            cout << "Continue (y/n)?" << endl;
            string cont = "a";
            cin >> cont;
            if(cont == "y"){
                input();
            } else {
                break;
            }
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

