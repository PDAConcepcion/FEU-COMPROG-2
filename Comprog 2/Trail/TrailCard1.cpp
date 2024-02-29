#include <iostream>
using namespace std;

void Display(int n[3][2]);

int main()
{
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1},
    };
    Display(num);
}

void Display(int n[3][2]) 
{
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << "\n";
    }
}