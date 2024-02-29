#include <iostream>
using namespace std;

int ave(int Grades[5], int average);

int main() 
{
    int myGrades[5];
    int average = 0;
    
    cout << "Enter the 5 Grades: ";   
    
    for (int i = 0; i < 5; i++)
    {
        cin >> myGrades[i];
    }

    average = ave(myGrades, average);
    
    cout << "Averange Grade: " << average;
    return 0;
}

int ave(int Grades[5] ,int average)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += Grades[i];
    }
    average = sum/5;

    return average;
}

