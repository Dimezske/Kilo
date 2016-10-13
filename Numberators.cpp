#include <iostream>
#include "Numberators.h"
using namespace std;

int numberRator(int param1, int *a)
{
    int integer1 =1;
    cout << "The First number is 100 + 1" << endl;
    return (param1 = 100) + (*a = integer1) ;
    cout << endl;
    
    
}

void numberRator2(int param2,int *b)
{
      int integer2 = 2;
      cout << b << endl;
      b = new int ;
     *b = 200;
    *b = integer2;
    *b = 100;
     cout << "a = "<< *b << " " <<"param1 = " << param2 << " "  << " address of a = " << b << endl;
     delete b;
     
}

void abbacuS(int *green, int *blue, int *red,int *orange,int *purple)
{
    int one(1);int two(2);int three(3);int four(4);int five (5);
    cout << green << blue << red << orange << purple << endl;
    green = new int;
    blue = new int;
    red = new int;
    orange = new int;
    purple = new int;
     *green =three ;
     *blue = five ;
     *red = four ;
    *orange = one;
    *purple = two;
    cout << "There are "<<*green << " green" << endl;
    cout << "There are "<<*blue << " blue" << endl;
    cout << "There are "<<*red << " red" << endl;
    cout << "There are "<<*orange << " orange" << endl;
    cout << "There are "<<*purple <<  " purple" << endl;
    cout << one << two << three << four << five << endl;
    delete green,blue,red,orange,purple;
    
}
