#include<iostream>
using namespace std;
int main(){
    double celsius,fahrenheit;
    cout<<"Enter temperature of fahrenheit ";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9;
    cout<<"temperature in celcius "<<celsius;
    return 0;
}
