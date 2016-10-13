#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

using namespace std;

class Calculator
{
private:
    void squareRoot();
    void square();
    void multiply();
    void subtract();
    void addition();
    void divide();
public:
    string input;
    int number1;
    int number2;
   int outputSR;
   int output;
  void turnOn();
  void turnOff();
};

#endif // CALCULATOR_H_INCLUDED
