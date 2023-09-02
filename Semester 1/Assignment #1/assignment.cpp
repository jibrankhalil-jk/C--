#include <iostream>
using namespace std;

int main()
{
    int engine = 0, count = 0, number = 0;
    int inputsize = 0;
    float average = 0;
    while (1 == 1)
    {
        cout << "\nEnter Inut Size : ";
        // cin >> inputsize;
        inputsize = 3;
        if (inputsize == -1)
        {
            average = engine / number;
            cout << "Average = " << average << " Cout : " << count;
            break;
        }
        else if (inputsize > 1.5)
        {
            count += 1;
        }
        number += 1;
        engine += inputsize;


          cout << "\n------------------------------" ;
          cout << "\nEngine : "<<engine;
          cout << "\nCount : "<<count;
          cout << "\nNumber : "<<number;
          cout << "\nInput Size : "<<inputsize;
          cout << "\nAverage : "<<average;
          cout << "\n------------------------------" ;

    }
    return 0;
}