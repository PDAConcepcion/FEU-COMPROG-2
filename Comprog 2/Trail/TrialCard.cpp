#include <iostream>
using namespace std;

int main() 
{
    int myArray[5];
    int sum = 0;
    
    cout << "Enter 5 Nnumbers: ";   
    
    for (int i = 0; i < 5; i++)
    {
        cin >> myArray[i];
        sum += myArray[i];
    }
    
    cout << "Sum of the numbers: " << sum;
    return 0;
}

