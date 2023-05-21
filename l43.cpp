// day2
// ENCAPSULATION- wrapping up of data membres, functions and info in a single unit

// aka information/data hiding
// security inc hojati he
// code reusability inc
// if we want we can make a class read only
// unit testing me kaam aati he

// jab sab data members ko private ME DECLARE krdo, jisse wo us class me hi access ho pae is how encapsulation implemented i.e. getter/setter

#include <iostream>
using namespace std;
class hero
{
    // encapsulation
private:
string name;
    int age;
    int height;
    // getter setter can be used to manipulate them
public:
    int getage()
    {
        return this->age;
    }
};
int main()
{
    hero h1;
    cout<<"all good"<<endl;
    return 0;
}

// abstraction: implementation hiding








//inheritance

// inheritance- properties inherit karlo, ex- from one class for another one, ex- mere baal ki durability by my father

#include <iostream>
using namespace std;
class human
{
    private:
    int a;

public:
    int h;
    int w;

    // int geth()
    // {
    //     return this -> h;
    // }
    // int getw(){
    //     return this->w;
    // }
    int getage()
    {
        return this->a;
    }

    void setw(int w)
    {
        this->w = w;
    }
    void print()
    {
        cout << "h " << this->h << " w: " << this->w << " age: " << this->a << endl;
    }
};

class male : public human
{

public:
    string color;

    void sleep()
    {
        cout << "male is sleeping" << endl;
    }
};
int main()
{
    male ob1;
    ob1.h = 123; // age n w male ki properties thi bhi nhi declared, but it inherited from its parent, so
    ob1.w = 89;
    //ob1.a = 45;//inaccessible, if a is private in base class and inherited publically in child class
    ob1.print();

    ob1.setw(90);
    ob1.print();

    return 0;
}
//////////























//1. single inheritance


// inheritance- properties inherit karlo, ex- from one class for another one, ex- mere baal durability by my father

#include <iostream>
using namespace std;
class animal
{
    public:
    int a;
    int w;

    public:
    void speak(){
        cout<<"speaking..."<<endl;

    }
};

class dog:public animal{

};
int main()
{
    dog d;
    d.speak();
    cout<<d.a<<endl;
    return 0;
}




///

//2.multilevel inheriteance

//animal ko dog inherit krrha he, dog ko germanshephered
#include <iostream>
using namespace std;
class animal
{
    public:
    int a;
    int w;

    public:
    void speak(){
        cout<<"speaking..."<<endl;

    }
};

class dog:public animal{

};
class germanshephered: public dog{

};
int main()
{
    
    dog d;
    d.speak();
    cout<<d.a<<endl;
    germanshephered g;
    cout<<"multilevel inheritance "<<g.w<<endl;
    g.speak();
    return 0;
}





//


//3. multiple inheritence
#include <iostream>
using namespace std;
class animal
{
public:
    int a = 12;
    int w = 15;

public:
    void bark()
    {
        cout << "barking animal like..." << endl;
    }

    
};
class human
{
public:
    string color = "brown";

public:
    void speak()
    {
        cout << "speaking human like..." << endl;
    }
};

class merihybridclass : public animal, public human
{
};

int main()
{
cout<<"multiple inheritance: MANWAR"<<endl;
animal c;
c.speak();
    merihybridclass manwar;
    manwar.speak();
    manwar.bark();
    cout << "age of manwar: " << manwar.a << endl;
    cout << "weight of manwar: " << manwar.w << endl;
    return 0;
}







//





//4. heirarchical- one base class is inherited by multiple sub/child/derived classes



#include <iostream>
using namespace std;
class A
{
public:
    void func1()
    {
        cout << "inside func1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "inside func2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "inside func3" << endl;
    }
};

int main()
{
    cout << "heirarchical inheritence" << endl;
    cout << "A :" << endl;
    A o1;
    o1.func1();
    // o1.func2();
    // o1.func2();

    cout << "B :" << endl;

    B o2;
    o2.func1();
    o2.func2();
    // o2.func2();

    cout << "C :" << endl;

    C o3;
    o3.func1();
    o3.func3();
    // o3.func2();
    return 0;
}










/////////////////////









// inheritance ambiguity
#include <iostream>
using namespace std;
class A
{
public:
    void func()
    {
        cout << "inside A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "inside B" << endl;
    }
};

class C : public A, public B
{
public:
    void func()
    {
        cout << "inside C" << endl;
    }
};

int main()
{
    cout << "heirarchical inheritence" << endl;
    cout << "A :" << endl;
    A o1;
    o1.func();
    o1.func();
    o1.func();

    cout << "B :" << endl;

    B o2;
    o2.func();
    o2.func();
    o2.func();

    cout << "C :" << endl;

    C o3;
    // o3.func();
    // o3.func();
    o3.B::func();
    o3.A::func();
    return 0;
}





















//polymorphism - compile time, runtime

//1. compile time aka static #p- 1.1 method/function overloading 1.2 oprator overloading

///

//1.2 operator overloading
#include <iostream>
using namespace std;
class A
{
public:
    void func(float b) 
    {
        cout << "inside A" << endl;
    }
    void func(int a)
    {
        cout << "inside Ak" << endl;
        return;
    }
};
class B
{
public:
    int a, b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {

        int val1 = this->a;
        int val2 = this->b;
        cout << "o/p: " << val2 - val1 << endl;
    }

    void operator()()
    { // brakets ko hi overload kardiya haha
        cout << "im Bracket, to print val of the object calling me, val: " << this->a << endl;
    }
};

int main()
{
    B o1, o2;
    o1.a = 4;
    o1.b = 7;
    (o1 + o2);
    // haha add krne ki jagah ab subtract krega mera prgrm
    o1();
    return 0;
}


//List of operators that cannot be overloaded in C++:   :: * . ?:













////////////







//runtime polymorphism:

//function overriding
#include <iostream>
using namespace std;
class animal
{
public:
    void speak()
    {
        cout << "speak" << endl;
    }
};

class dog : public animal
{
public:
    void speak()
    {
        cout << "bark" << endl;
    }
    
};

class goat : public animal
{
};

int main()
{
    animal a;
    a.speak();

    dog b;
    b.speak(); //ye function-overriding kar rha he, base class ka function nhi ho rha call bro:(

    goat c;
    c.speak(); 

    return 0;
}
