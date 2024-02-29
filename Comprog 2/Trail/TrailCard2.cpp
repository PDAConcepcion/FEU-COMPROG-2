#include <iostream>
#include <cstring>

using namespace std;

int main()
{ 
    char x[]="good morning "; 	
    char y[25], z[15];
    cout<<"The string character in array x is " << x <<endl;
    cout<<"The string character in array y is " << strcpy(y,x) <<endl; // y (destination) <---- x (Source)
    strncpy(z,y,4); // z (destination) <---- y (source == good morning), number of character to copy (4 == good)
    z[5]='\0';
    cout<<"The string character in array z is " << z<<endl;
    system("pause>0");

    return 0;
}
