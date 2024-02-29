#include <iostream>
#include <cstring>

using namespace std;

void stringCat (char *s1, char *s2);

int main() 
{
    char str1[20] = "The Happy";
    char str2[20] = " Man";

    stringCat(str1, str2);
    cout << str1;


    system("pause > 0");
    return 0;
}

void stringCat(char *s1, char *s2)
{
    int i = 0;
    while (i < *s1)
    {
        i++;
    }

    while (*s1 = *s2)
    {
        
    }
}
