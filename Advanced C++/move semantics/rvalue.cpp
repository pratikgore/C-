//Insted of creating deep copy using r-value refernce of temporaries apply move semantics 
/* r- value references (&&) helps to detect temporaries in code 
    
*/



#include <iostream>

using namespace std;

void printReference(int &value)
{
    cout << "lvalue: value = " << value << endl;
}

void printReference(const int & value) {
    cout << "r or  l value: value = " << value << endl;
}
 void printReference(int &&value)
{
    cout << "rvalue: value = " << value << endl;
}

int getValue()
{
    int temp_ii = 99;
    return temp_ii;
}

int main()
{
    int ii = 11;
    printReference(ii); // gives l-values 
    printReference(getValue()); //  printReference(99); gives rvalue 
    return 0;
}