#include <iostream>
#include "yessir.cpp" //other way of using class
using namespace std;
// object is an instance of a class, class is a template for an object

class hero
{
    // hero ki properties
    int height; // also private by default
    float weight;

private:
    int h;

public:
    int a = 3;
};
int main()
{
    superman c1;
    superman amir;
    cout << "amir superman ka size: " << sizeof(c1) << endl;
    hero raju;                                              // ye object create ki he mene
    cout << " hero raju ka size: " << sizeof(raju) << endl; // 4
    hero ammar;
    cout << "hero ammar ka size: " << sizeof(ammar) << endl; // ab sab ka size 8 aane lgega jab float weight; bhi declare kiya tab
    raju.a = 17;
    // raju.h=17; is not valid since its trying to access prvate member of class hero, so we make use of getter and setter method
    cout << "hero raju ki weight: " << raju.a << endl;
    // raju.h=12;
    // cout<<raju.h<<endl;
    return 0;
}

//////
#include <iostream>
using namespace std;
class hero
{

private:
    int health = 1000000;

public:
    char level = 'z';

    // ye getter and setter public me hi define krne pdenge taki acess kr paee, if private me define kiya then getter/setter bhi inaccessible ho jaenge
    // getter:
    int get_health()
    {
        return health;
    }
    char get_level()
    {
        return level;
    }

    void set_health(int h)
    {
        health = h;
    }
    void set_level(char ch)
    {
        level = ch;
    }
};
int main()
{
    hero raju;
    // raju.level=12;
    // cout<<"hero raju's level "<<raju.level<<endl;
    // GETTER:
    cout << "hero raju's health: " << raju.get_health() << endl;

    cout << "hero raju's level: " << raju.get_level() << endl;
    // SETTER:
    raju.set_health(9);
    cout << "hero raju's new set health:" << raju.get_health() << endl;
    raju.set_level('a');
    cout << "hero raju's new set level:" << raju.get_level();

    return 0;
}

//////////////////

#include <iostream>
using namespace std;
class hero
{

private:
    int health = 1000000;

public:
    char level = 'z';
    int get_health()
    {
        return health;
    }
    char get_level()
    {
        return level;
    }

    void set_health(int h)
    {
        health = h;
    }
    void set_level(char ch)
    {
        level = ch;
    }
};
int main()
{
    // static memory allocation
    hero raju;

    raju.set_health(80);
    raju.set_level('B');
    cout << "hero raju's health: " << raju.level << endl;
    cout << "hero raju's level: " << raju.get_health() << endl;

    // dynamically-
    hero *rajjo = new hero;
    rajjo->set_level('c');
    rajjo->set_health(10);
    cout << "hero rajjo's health: " << (*rajjo).level << endl;
    // e.i. dereference krke dot operator ka use kiya
    cout << "hero rajjo's level: " << (*rajjo).get_health() << endl;

    // can also be written as:

    cout << "hero rajjo's health: " << rajjo->level << endl;

    cout << "hero rajjo's level: " << rajjo->get_health() << endl;
    return 0;
}

/////////////////

#include <iostream>
using namespace std;
class hero
{

private:
    int health = 1000000;

public:
    char level = 'z';
    int get_health()
    {
        return health;
    }
    char get_level()
    {
        return level;
    }

    void set_health(int h)
    {
        health = h;
    }
    void set_level(char ch)
    {
        level = ch;
    }
    hero()
    {
        cout << "constructor called" << endl;
    }
    hero(int health)
    {
        cout << "this ->" << this << endl;
        this->health = health; //"this" pointer me current object ka address store ho jaega

        this->level = level;
    }
};
int main()
{
    cout << "yes?" << endl;

    // statically:
    hero hala; // object created, so now the default will be invoked without it being called explicitly

    // dynmically:
    hero(*rana) = new hero;
    cout << "ok" << endl;

    cout << "///////////////////////////////////////////" << endl;
    hero raj(10);
    cout << "address of raj:  " << &raj << endl;
    raj.get_health();
    hero kk; // if ek bhi constructor bana hua he mera(ex- ooper parameterised constructors and default constructor nhi he declared then me agar koi object banata hu then koi constructor (by default wala) call nhi hoga i.e. default (jo explicitly declarfe nhi kiya gaya) is invoked only when we have no constructor declared whatsoever ){ex- remove line 28-30 then run} and thus default wala bhi exist nhi krega(jo invisible tha){time: 48:50}

    return 0;
}

////////////////////////
#include <iostream>
using namespace std;
class hero
{

private:
    int health = 1000000;

public:
    char level = 'z';
    int get_health()
    {
        return health;
    }
    char get_level()
    {
        return level;
    }

    void set_health(int h)
    {
        health = h;
    }
    void set_level(char ch)
    {
        level = ch;
    }
    hero()
    {
        cout << "constructor called" << endl;
    }
    hero(int health)
    {
        this->health = health;
    }
    hero(int health, char ch)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "health: " << this->health << endl;
        cout << "level: " << this->level << endl;
    }
};
int main()
{
    hero S(70, 'C');
    S.print();

    // copy constructor:
    hero R(S);
    R.print();

    return 0;
}

////////////////////

#include <bits/stdc++.h>
using namespace std;
class hero
{
public:
    hero(int a, char ch)
    {
        cout << "yes" << endl;
    }
};
int main()
{
    // 1. default costructor
    // 2. parameterized constructor
    // 3. copy constructor
    // ex-
    hero suresh(1, 'a');
    hero ramesh(suresh); //== hero ramesh=suresh;
    // hero s; ki tarah nhi delcare kar skte ab qki default constructor nhi rha ab

    return 0;
}

//////////////

// SHALLOW COPY

// #include <bits/stdc++.h>
// using namespace std;
// class hero
// {
//     // shallow copy, reference is sent , so the changes are made at original position, ex-line 11
//     // default copy constructor shallow copy karta he

//     int h;
//     char g; // height n grade

// public:
//     char *name;
//     // hero(int h, char g)
//     // {
//     //     this->h = h;
//     //     this->g = g;
//     // }
//     // wont work since parameterized constructor is declared:
//     //  hero()
//     //  {
//     //      cout << "object created" << endl;
//     //  }
//     hero()
//     {
//         cout << "simple constructor called" << endl;
//         name = new char[100];
//     }
//     void print()
//     {
//         cout << "name: " << name << " h: " << h << " g: " << g << endl;
//     }
//     void seth(int h1)
//     {
//         h = h1;
//     }
//     void setw(char ch)
//     {
//         g = ch;
//     }
//     int showh()
//     {
//         return h;
//     }
//     char showg()
//     {
//         return g;
//     }
//     void setname(char name[])
//     {
//         strcpy(this->name, name);
//     }
// };
// int main()
// {
//     hero h1;
//     h1.seth(12);
//     h1.setw('d');
//     char name[7] = "faisal";
//     h1.setname(name);
//     h1.print();

//     hero h2(h1);
//     h2.print();
//     h1.name[0] = 'B';
//     h1.seth(100);
//     h1.print();
//     h2.print();

//     return 0;
// }

// DEEP COPY
#include <bits/stdc++.h>
using namespace std;
class hero
{
    // shallow copy, reference is sent , so the changes are made at original position, ex-line 11
    // default copy constructor shallow copy karta he

    int h;
    char g; // height n grade

public:
    char *name;
    // hero(int h, char g)
    // {
    //     this->h = h;
    //     this->g = g;
    // }
    // wont work since parameterized constructor is declared:
    //  hero()
    //  {
    //      cout << "object created" << endl;
    //  }

    // copy constructor

    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1]; //+1 null char ko store krne k liye
        strcpy(ch, temp.name);
        this->name = ch;
    }
    hero()
    {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }
    void print()
    {
        cout << "name: " << name << " h: " << h << " g: " << g << endl;
    }
    void seth(int h1)
    {
        h = h1;
    }
    void setw(char ch)
    {
        g = ch;
    }
    int showh()
    {
        return h;
    }
    char showg()
    {
        return g;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{
    hero h1;
    h1.seth(12);
    h1.setw('d');
    char name[7] = "faisal";
    h1.setname(name);
    h1.print();

    hero h2(h1);
    h2.print();
    h1.name[0] = 'B';
    h1.seth(100);
    h1.print();
    h2.print();

    return 0;
}

//

#include <bits/stdc++.h>
using namespace std;
class hero
{
    // shallow copy, reference is sent , so the changes are made at original position, ex-line 11
    // default copy constructor shallow copy karta he

    int h;

public:
    // static int timetocomplete;
    char g; // height n grade
    char *name;
    static int timetocomplete;
    // hero(int h, char g)
    // {
    //     this->h = h;
    //     this->g = g;
    // }
    // wont work since parameterized constructor is declared:
    //  hero()
    //  {
    //      cout << "object created" << endl;
    //  }

    // copy constructor

    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1]; //+1 null char ko store krne k liye
        strcpy(ch, temp.name);
        this->name = ch;
    }
    hero()
    {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }
    void print()
    {
        cout << "name: " << name << " h: " << h << " g: " << g << endl;
    }
    void seth(int h1)
    {
        h = h1;
    }
    void setw(char ch)
    {
        g = ch;
    }
    int showh()
    {
        return h;
    }
    char showg()
    {
        return g;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    // destructor
    ~hero()
    {
        cout << "destructor called" << endl;
    }
    static int merastaticfunction()
    {
        // cout<<h<<g<<name<<this->h; //all cant be accessed, since static memebers only can be accessed,

        //*so we declare the static memeber in class also, line-9; (maybe wrong this line)
        cout << "now "<< endl;
        return timetocomplete;
    }
};

int hero::timetocomplete = 5;
void example()
{
    hero a; // ab is finction k bahr jate hi object die hojaegi using destructor
}

int main()
{ // static k liye destructor automatically call hota he dynamically k liye nhi
    hero a;

    // dynamic
    hero *b = new hero;
    delete b;
    // try to comment above line n run

    // now if i want to access timetocomplete property without creating an object, i make use of static keyword

    // at 1st i make it static, so

    cout << "without object creation " << hero::timetocomplete << endl;

    // static member dont belong to an object but to a class so, a bad practice is-

    // a.timetocomplete = 12;
    // cout << a.timetocomplete << endl;
    cout << "static function " << endl;
    cout << hero::merastaticfunction() << endl;
    hero::timetocomplete = 76;
    cout << hero::merastaticfunction() << endl;

    return 0;
}
