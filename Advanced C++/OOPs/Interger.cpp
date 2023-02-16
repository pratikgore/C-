#include<iostream>

class Integer {
    private :
        int *myint; 
    public :
        Integer();
        Integer(int value);
        Integer(const Integer &obj);  // Const to avoid change in obj as passed by refernce

        ~Integer(); 
        int GetValue() const;
        void SetValue(int value); 
};

//Constructors 
Integer :: Integer() {
        myint = new int(0); 
}
Integer :: Integer(int value) {
        myint = new int(value); 
}
Integer :: Integer (const Integer &obj) {
        myint = new int(*obj.myint); 
}
//Destructor 
Integer :: ~Integer() {
        delete myint; 
}

//Memeber functions 
int Integer ::GetValue() const
{
        return *myint;
}

void Integer ::SetValue(int value) {
        *myint = value; 
}

int main()
{
        Integer i(8), j, k;
        std ::cout << i.GetValue() <<std:: endl;
        j.SetValue(6);
        std ::cout << j.GetValue() << std::endl;
        std ::cout << k.GetValue() << std::endl;

        //Implict call tp copy constructor  code get dumed , implement copy constructor for it 
        Integer a(j);
        std ::cout << a.GetValue() << "\n"; 

        return 0;
}