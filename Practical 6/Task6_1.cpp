#include <iostream>
using namespace std;

// A constructor called by compiler when object of the class is created,
// it can then allocates memory to the object intializes class data members

// A deconstructor is called by the compuler when object of the class is destroyed,
// it deallocates the memory of the object.

// Stack manage, first in last out,  if we create class b, class b would be deallocated last

class A
{
    int i;

public:
    A(int ii) : i(ii) //This is just passing the value of ii to i, it receives the value of ii from c, which is 47
    {
        cout << "A's ctor is called" << endl;
    }
    ~A()
    {
        cout << "A's dtor is called" << endl;
    }
    void f() const {}
};

class B
{
    int i;

public:
    B(int ii) : i(ii)
    {
        cout << "B's ctor is called" << endl;
    }
    ~B()
    {
        cout << "B's dtor is called" << endl;
    }
    void f() const {}
};

class C : public B //stating  C inherits from B 
{
    A a; //creating an object from a

public:
    C(int ii) : B(ii), a(ii) //it is inheriting properities from B to C (Parent to Child)
    {
        cout << "C's ctor is called" << endl;
    }
    ~C()
    {
        cout << "C's dtor is called" << endl;
    }
    void f() const //This is saying to run the f() in a and B, doesnt really need to be here??? 
    {
        a.f();
        B::f();
    }
};

int main()
{
    C c(47); //Creating a object c and passes the value 47 to it 

    return 0;
}

//When program is run, B is called first then A then C
//This is because when c is called it runs the parent first which is B, and then it constructs an object of A
//therefore it runs a next, and then it does c 

//Because of the way stack data management works when deallocating we follow the first in first out,
//So since we created B first we must delete C then A then B 
