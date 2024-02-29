#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char empty;
    char input[50];

    cout << "Enter the word: ";
    cin.get(input, 50);

    for (int i = 0; i < 50; i++)
    {
        tolower(input[50]);
    }
}