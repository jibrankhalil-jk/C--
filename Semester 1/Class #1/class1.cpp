#include <iostream>
using namespace std;


float celciusToFarenhiet(int celcius){
    return 9 / 5 * celcius + 32;
}

int main()
{
    float temperature;
    cout << "Enter the Temperature in celcius: ";
    cin >> temperature;
    float output = celciusToFarenhiet(temperature);
    cout << "Temperature in Farenhiet is :";
    cout << output;
    return 0;
}



// date 1-sep-2023