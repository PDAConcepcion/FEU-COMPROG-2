#include <iostream>
#include <string>

using namespace std;

struct WeeklyTemp
{
    string cityName;
    string weekName[7];
    float temp[7][1];
};

int main() {
    float sum;
    float averange;
    WeeklyTemp weeklytemp; // declaration for 

    cout << "What is the name of the city: ";
    getline(cin, weeklytemp.cityName);

    //cout << weeklytemp.cityName; for data checking

    weeklytemp.weekName[0] = "Monday";   
    weeklytemp.weekName[1] = "Tuesday";  
    weeklytemp.weekName[2] = "Wednesday";  
    weeklytemp.weekName[3] = "Thursday";  
    weeklytemp.weekName[4] = "Friday";  
    weeklytemp.weekName[5] = "Saturday";  
    weeklytemp.weekName[6] = "Sunday";  
    
    //cout << weeklytemp.weekName[0];

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter temprature " << weeklytemp.weekName[i] << ": ";
        for (int j = 0; j < 1; j++)
        {
            cin >> weeklytemp.temp[i][j];
        }
    }
    
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            sum += weeklytemp.temp[i][j];
        }
    }
    averange = sum / 7;

    cout << "The averange of the temperature in " << weeklytemp.cityName << " is: " << averange;
    return 0;
}
