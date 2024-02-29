#include <iostream>
#include <string>

using namespace std;

void Display(int G[2][5], string name[2]);

int main()
{
    string Name[2];
    int Grades[2][5];
    int average[2] = {0, 0};

    for (int i = 0; i < 2; i++)
    {
    	
        cout << "Enter the name of the " << i + 1 << " student: ";
        cin >> Name[i];
            
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter grade for " << Name[i] << " in subject " << j + 1 << ": ";
            cin >> Grades[i][j];
        }
    }

    
    Display(Grades, Name);
}

void Display(int G[2][5], string name[2]) 
{
    cout << "Grades of the following: " << endl;
    for (int i = 0; i < 2; ++i)
    {
        cout << "Grades for " << name[i] << ": ";
        for (int j = 0; j < 3; j++)
        {
            cout << G[i][j] << " ";
        }
        cout << "\n";
    }
}

int ave()
{

}