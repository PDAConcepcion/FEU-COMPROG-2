#include <iostream>
#include <string>

using namespace std;

//function declaration/prtotype
void MenuDisplay();




struct Players
{
    string nickname;
    int age;
    float scores[];
};

//main
int main() 
{
    Players players;

    //switch for menu





}

void MenuDisplay() 
{  
    cout << "\t==============================================\n";
    cout << "\t                      Menu                    \n";
    cout << "\t==============================================\n";
    cout << "\t 1. Add record\n";
    cout << "\t 2. View player record\n";
    cout << "\t 3. Compute for the average\n";
    cout << "\t 4. Show the player(s) who gets the max average.\n";
    cout << "\t 5. Show the player(s) who gets the min average.\n";
    cout << "\t 6. Exit\n";
}

