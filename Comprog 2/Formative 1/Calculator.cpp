#include <iostream>

using namespace std;

int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
int Divide(int a, int b);
int Modulus(int a, int b);
void Display();

int main() {
    int choice;
    int num1, num2, Answer;
    bool loop = true;

    while (loop)
    {
        Display();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6)
        {
            loop = false;
            continue;
        }

        cout << "Enter 1st and 2nd number: ";
        cin >> num1 >> num2;

        switch (choice)
        {
        case 1:
            {
                Answer = Add(num1, num2);
                break;
            }
        case 2:
            {
                Answer = Subtract(num1, num2);
                break;
            }  
        case 3:
            {
                Answer = Multiply(num1, num2);
                break;
            } 
        case 4:
            {
                Answer = Divide(num1, num2);
                break;
            }
        case 5:
            {
                Answer = Modulus(num1, num2);
                break;
            }
        default:
            {
                cout << "Please Enter from 1-5 only" << endl;
                break;
            }
        }
    }

    cout << "\nProgram Exited Succesfuly\n";

    return 0;
}

int Add(int a, int b) {
    int A;
    A = a + b;
    cout << a << " + " << b << " = " << A << '\n';
	return A;
}

int Subtract(int a, int b) {
    int A;
    A = a - b;
    cout << a << " - " << b << " = " << A << '\n';
    return A;
}

int Multiply(int a, int b) {
    int A;
    A = a * b;
    cout << a << " * " << b << " = " << A << '\n';
    return A;
}

int Divide(int a, int b) {
    int A;
    A = a / b;
    cout << a << " / " << b << " = " << A << '\n';
    return A; 
}

int Modulus(int a, int b) {
    int A;
    A = a % b;
    cout << a << " % " << b << " = " << A << '\n';
}

void Display() {

    cout << "\n*****************************\n";
    cout << "             Menu            \n";
    cout << "*****************************\n";
    cout << "\t[1] Add\n\t[2] Subtract\n\t[3] Multiply\n\t[4] Divide\n\t[5] Modulus\n\t[6] Exit" << endl;
    
}
