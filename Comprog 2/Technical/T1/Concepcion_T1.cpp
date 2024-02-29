#include <iostream>
#include <math.h>

using namespace std;

//Function Prototype
void Display();
void MenuDisplay();
int Addition(int x, int y);
int Subtraction(int x, int y);
int Multiplication(int x, int y);
int Division(int x, int y);
int Modulo(int x, int y);
int Power(int x, int y);

//main function
int main() {
    int choices;
    int num1, num2;
    int num3 = 0;
    bool loops = true;

    while (loops)
    {
        system("cls"); // for making it look clean
        num3 = 0; // to make it so the answer will always start and end at 0

        Display(); // display
        MenuDisplay(); //menu

        //input for choices in operator
        cout << "Enter your an operator:\n";
        cin >> choices; 

        // for inputing less than 1 or greater than 7 : anti error
        if (choices < 1 || choices > 7)
        {
            cout << "!!!Please enter from 1 to 7 only in the choices above!!!\n";
            continue;
        } else if (choices == 7) //for exiting the loop
        {
            loops = false;
            continue;
        }
        
        //inputs for the 1st and 2nd number
        cout << "Enter 2 numbers: ";
        cin >> num1 >> num2;

        // switch function for the operators
        switch (choices)
        {
        case 1:
            {
                num3 = Addition(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        case 2:
            {
                num3 = Subtraction(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        case 3:
            {
                num3 = Multiplication(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        case 4:
            {   
                num3 = Division(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        case 5:
            {
                num3 = Modulo(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        case 6:
            {
                num3 = Power(num1, num2);
                cout << " = " << num3 << endl;
                cin.ignore();
                cin.get();
                break;
            }
        default:
            {
                cout << "!!!Please enter from 1 to 7 only in the choices above!!!\n" << endl;
                break;
            }
        }
    }
    
    cout << "Exiting..." << endl;
    return 0;
}

//all function for the operators name is already explenatory
int Addition(int x, int y) {
    cout << x << " + " << y;
    return x + y;
}

int Subtraction(int x, int y) {
    cout << x << " - " << y;
    return x - y;
}

int Multiplication(int x, int y) {
    cout << x << " * " << y;
    return x * y;
}

int Division(int x, int y) {
    cout << x << " / " << y;
    return x / y;
}

int Modulo(int x, int y) {
    cout << x << " % " << y;
    return x % y;
}

int Power(int x, int y) {
    cout << x << " ^ " << y;
    return pow(x, y); 
}

//function for display only
void Display() {
    cout << "-----------------------\n";
    cout << "| Calculator Program  |\n";
    cout << "-----------------------\n";
}

void MenuDisplay() {
    cout << "-----------------------\n";
    cout << "|  [1] Addition       |\n";
    cout << "|  [2] Subtraction    |\n";
    cout << "|  [3] Multiplication |\n";
    cout << "|  [4] Division       |\n";
    cout << "|  [5] Modulo         |\n";
    cout << "|  [6] Power          |\n";
    cout << "|  [7] Exit           |\n";
    cout << "-----------------------\n";

}
