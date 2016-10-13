#include <iostream>
#include "Frosty.h"
using namespace std;

int frostyAge ;
string calcInput;

void frostyPie()
{
    string *sentancE = new string("Frosty is a cool Snowman who Snowboards");
    cout << *sentancE << endl;
    
    (*sentancE) [12] = 'A';
    sentancE->replace(13,3,"wesome");
    cout << *sentancE << endl;
    int *pointage = &frostyAge;
    *pointage = 18;
     cout << "Frosty is " << frostyAge << " Days Old" << endl;
    
}
