#include <iostream>
#include <math.h>
#include "calculator.h"
using namespace std;

void Calculator::squareRoot()
{
   
    cin >> number1;
    cout << endl;
    outputSR = pow(number1,0.5);
     cout << outputSR<< endl;
     cout << endl;
    
    
}
void Calculator::square()
{
    cin >> number1;
    cout << endl;
    cin >>number2;
    output = number1 * number2;
    cout << output << endl;
    cout << endl;
}
void Calculator::multiply()
{
    cin >> number1;
    cout << endl;
    cin >> number2;
    cout << number1 * number2 << endl;
    cout << endl;
}
void Calculator::subtract()
{
    cin >> number1;
    cout << endl;
    cin >> number2;
    cout << number1 - number2 << endl;
    cout << endl;
}
void Calculator::addition()
{
    cin >> number1;
    cout << endl;
    cin >> number2;
    cout << number1 + number2 << endl;
    cout << endl;
}
void Calculator::divide()
{
    cin >> number1;
    cout << endl;
    cin >> number2;
    cout << number1 / number2 << endl;
    cout << endl;
}
void Calculator::turnOn()
{
    cout << "The Calculator is ON" << endl;
    
        cout << "BUTTONS OF THE CALCULATOR" << endl;
        cout << endl;
        cout << "R  - squareRoot" << endl;
        cout << "S - square" << endl;
        cout << "/ * - +  operators" << endl;
        cout << "B - back" << endl;
           bool wait2 = true;
    while (wait2 ==true)
    {
        cin >> input;
      
        if (input == "R"||"r")
        {
            squareRoot();
        }
        
        if (input == "S"||"s")
        {
            square();
        }
        
        if (input == "*")
        {
            multiply();
        }
        
        if(input == "-")
        {
            subtract();
        }
        
        if (input == "+")
        {
            addition();
        }
        
        if (input == "/")
        {
            divide();
        }
        
        if (input == "b" || "B")
        {
            break;
        }
    
    }
}
void Calculator::turnOff()
{
    cout << "The Calculator is OFF" << endl;
   
}
