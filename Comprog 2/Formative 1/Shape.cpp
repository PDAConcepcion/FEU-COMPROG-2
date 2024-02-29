#include <iostream>
#include <math.h>

using namespace std;

void DisplayMenu();
int AreaSqaure();
int AreaRectangle();
int AreaTriangle();
double AreaCircle();

int main() {
    int choice;
    int Area;
    bool loop = true;

    while (loop)
    {
        DisplayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
        {
            loop = false;
            continue;
        }
        

        switch (choice)
        {
        case 1:
            {
            Area = AreaSqaure();
            Area = 0;
            break;
            }
        case 2:
            {
            Area = AreaRectangle();
            Area = 0;
            break;
            }
        case 3:
            {
            Area = AreaTriangle();
            Area = 0;
            break;
            }
        case 4:
            {
            Area = AreaCircle();
            Area = 0;
            break;
            }
        default:
            {
            cout << "Please enter 1-5";
            break;
            }
        }
    }

    cout << "Exited Succesfully" << endl;
    return 0;
}

void DisplayMenu() {
    cout << "====================================================\n";
    cout << "                        Menu                        \n";
    cout << "====================================================\n";
    cout << "   [1] - Area of Square\n";
    cout << "   [2] - Area of Rectangle\n";
    cout << "   [3] - Area of Triangle\n";
    cout << "   [4] - Area of Circle\n";
    cout << "   [5] - Exit\n";
    cout << "====================================================\n";
}

int AreaSqaure() {
    int side, area;

    cout << "====================================================\n";
    cout << "                  Area of Square                    \n";
    cout << "====================================================\n";

    cout << "Enter the side of the square: ";
    cin >> side;

    area = pow(side, 2);

    cout << "Area = " << area << '\n';
    return area;
}

int AreaRectangle() {
    int side1, side2, area;

    cout << "====================================================\n";
    cout << "                 Area of Rectangle                  \n";
    cout << "====================================================\n";

    cout << "Enter the length and width side of the Rectangle: ";
    cin >> side1 >> side2;

    area = side1 * side2;

    cout << "Area = " << area << '\n';
    return area;
}

int AreaTriangle() {
    int side1, side2, area;

    cout << "====================================================\n";
    cout << "                 Area of Triangle                   \n";
    cout << "====================================================\n";

    cout << "Enter the Base and Height side of the Triangle: ";
    cin >> side1 >> side2;

    area = side1 * side2 / 2;
    cout << "Area = " << area << '\n';
    return area;
}

double AreaCircle() {
    double radius, area;
    const double pi = 3.14;

    cout << "====================================================\n";
    cout << "                  Area of Circle                    \n";
    cout << "====================================================\n";
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * pow(radius, 2);

    cout << "Area = " << area << '\n';
    return area;
}
