#include<iostream>
using namespace std;
int main (){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    if(number % number == 0 || number % 1 == 0){
        cout<<"Prime Number";
    }else{
        cout<<"";
    }
        // cout<<6* number + 1;

    return 0;
}