#include<iostream>
#include<memory>
using namespace std ; 

/*When we want single ownership to resource  , replacement to autoPtr and doesn't fakes assignment */

class Rectangle {
    private :
        int a, b; 
    public : 
    Rectangle(int a, int b) :a(a),b(b) {}
    void show () {
        cout<<this<<endl ; 
        cout<<a<<" "<<b<<endl ; 
    }
};
 
 int main()
{
    unique_ptr<Rectangle> p(new Rectangle(4, 5));
    p->show();
    cout<<p.get()<<endl; 
    unique_ptr<Rectangle> q = move(p);                       //Only move can transfer control
    q->show();
    p->show();
    cout << q.get() << endl;

    return 0;
}