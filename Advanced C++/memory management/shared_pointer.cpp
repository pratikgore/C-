#include<iostream>
#include<memory> 
using namespace std ;

/*Sharing  resouce along various pointers : sharing  relationship , .get() , .uset_count() , .reset()*/

class Rectangle
{
private:
    int a, b;

public:
    Rectangle(int a, int b) : a(a), b(b) {}
    void show()
    {
        cout << this << endl;
        cout << a << " " << b << endl;
     }
    void set(int val) {
        a=val ; 
    } 
};

int main()
{
    shared_ptr<Rectangle> p(new Rectangle(5, 6));
    shared_ptr<Rectangle> q(p);
    shared_ptr<Rectangle> r(q);

    p->show();
    q->show();
    q->set(8);
    p->show();

    p.reset();
    cout << p.use_count() <<" "<<q.use_count() << endl;
    return 0;
}