#include <iostream>

class Integer
{
private:
    int *myint;

public:
    Integer();
    Integer(int value);
    Integer(const Integer &obj); // Const to avoid change in obj as passed by refernce

    ~Integer();
    int GetValue() const; 
    void SetValue(int value);

    Integer operator+(const Integer &a);
    Integer operator=(const Integer &a);
    Integer operator++();
    Integer operator++(int); 
};

// Constructors
Integer ::Integer()
{
    myint = new int(0);
}
Integer ::Integer(int value)
{
    myint = new int(value);
}
Integer ::Integer(const Integer &obj)
{
    myint = new int(*obj.myint);
}

// Destructor
Integer ::~Integer()
{
    delete myint;
}

// Memeber functions
int Integer ::GetValue() const
{
    return *myint;
}
void Integer ::SetValue(int value)
{
    *myint = value;
}


//Overloaded operators 
Integer Integer :: operator+ (const Integer &a) {
    Integer temp;
    *temp.myint = *myint + *a.myint;
    return temp; 
}

//preincrement operator 
Integer Integer :: operator++ () {
    ++(*this->myint);
    return *this; 
}

//postincrmeent operator
Integer Integer :: operator++(int) {
    Integer t(*this);
    ++(*myint);
    return t; 
}
//Assignment operator
Integer Integer ::operator=(const Integer &a) {
    // for checking self refernce (a=a) ; 
    if (&a != this)
    {
        myint = new int(*a.myint);
    }
    return *this; 
}

    int main()
    {

        Integer a(6), b(7);
        // Integer s = a + b;
        // std::cout << s.GetValue() << std::endl;
        //b++;
        //std::cout << b.GetValue() << std::endl;

        b = a;
        std::cout << b.GetValue() << std::endl;

        return 0;
    }