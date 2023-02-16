#include<iostream>

int fun(int *ptr)
{
    return (*ptr + 10);
}

int main()
{
    //static converstion  --> checking valid types
    int a = 5;
    float p = static_cast<float>(a);
    std::cout << p << "\n";

    float b = 6.6;
    int q = static_cast<int>(b);
    std::cout << q << "\n";

    //interpret type converstion --> allows to change type of pointers 
    /* Dangerous to use , used while working with bits , boolean pointers */

    char v = 'z';
    char *c = &v;
    int *ptr = reinterpret_cast<int *>(c);
    std::cout << *ptr << "\n";

    // const-cast --> allows to change const variable cast

    const int x = 8;
    float j = static_cast<float>(x);
    std::cout << j << "\n";

    /*Passing const value to non const function */

    const int val = 10;                                              
    const int *ptr = &val;
    int *ptr1 = const_cast<int *>(ptr);
    std :: cout << fun(ptr1) << "\n"; 

    return 0;
}