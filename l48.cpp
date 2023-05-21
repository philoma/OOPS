#include <iostream>
#include "l48_reference.cpp"
using namespace std;
class Heroin
{
};
class Villain
{
    char v1;
};
class Hero
{
    char h1;
    int h2;
    int h3;
    long long h4;
};
int main()
{
    Hero ramesh;
    Villain sambha;
    cout << sizeof(Hero) << endl;
    cout << sizeof(ramesh) << endl;
    cout << sizeof(Villain) << endl;
    cout << sizeof(sambha) << endl;
    cout << "empty class size(uske identification ke liye), by default: " << sizeof(Heroin) << endl;
    boss faiz;
    cout << "external class imported :"<<sizeof(faiz) << endl;
    return 0;
}
//////////////////////////////////////////



#include <iostream>
using namespace std;
class Villain
{
public:
    int h2 = 14;
    int h3;
};
class Hero
{
    int h1 = 12;

public:
    int getH()
    {
        return h1;
    }

    void setH(int h)
    {
        int h1 = h;
    }
};
int main()
{
    Hero anu;
    // accessing elements(object) of a class:
    //   cout<<anu.h1; (cant access private members of a class)
    // so we make use of acess modifiers //private, public, restricted or use getter/setter to access private members
    Villain sambha;
    cout << sambha.h2 << endl;
    sambha.h3 = 11;
    cout << sambha.h3 << endl;
    cout << "//////////////////////////////////////////" << endl;
    // we make use of getter and setter to access private members
    // cout<<anu.h1<<endl; now with getter n setter:
    cout << anu.getH() << endl;

    // dynamically allocation:
    Hero *b = new Hero;
    cout << "health level is: " << (*b).getH()<<endl;
    cout<<"is same as :  "<<b->getH()<<endl;
    


    return 0;
}

///////////////////////////////////////////////////


//dynamically declaration

#include <iostream>
using namespace std;
class hero
{
  int age;
  char level;

public:
  void setage (int a)
  {

    age = a;

  }

  int getage ()
  {
    return age;
  }

  void setlevel (char ch)
  {
    level = ch;
  }

  char getlevel ()
  {
    return level;
  }



};

int
main ()
{
  hero sam;
  sam.setlevel ('A');
  sam.setage (12);
  cout << sam.getlevel () << endl << sam.getage ()<<endl;
  hero *dam = new hero;

  (*dam).setage (22); //== dam->getage(22)
  (*dam).setlevel ('B');  //dam->getlevel()
  cout << (*dam).getlevel () << endl <<(*dam).getage ()  << endl;
  
  hero*aam=new hero;
  (*aam).setlevel('C');
  (*aam).setage(34);
  cout<<(*aam).getlevel();
  cout<<endl<<(*aam).getage();
  
  hero*baam =new hero;
  baam->setage(55);
  baam->setlevel('D');
  cout<<endl<<baam->getlevel()<<endl<<baam->getage()<<endl;
  
 
  
  return 0;
}




////////////////////////////////////////////////////////////////////





#include <iostream>
using namespace std;

class Hero
{
    int h1 = 12;
 
public:
    char level;
    // constructor has no return type, so:
    Hero()
    {
        cout << "i am a default constructor" << endl;
    }
    // parameterised constructor:
    // Hero(int h)
    // {
    //     cout << "this -> " << this << endl; // this is a pointer to current object
    //     this->h1 = h1;
    // }
    // above one can also be written as -
    Hero(int h)
    {
        this->h1 = h1;
    }

    Hero(int h,char level){
        this->level                      =       level;
            //public wala level(line 9)        //passed parameter wala level
        this->h1=h1;

    }
    int getH()
    {
        return h1;
    }

    char getL(){
        return level;
    }

    void setL(char ch){
        level=ch;
    }

    void setH(int h)
    {
        int h1 = h;
    }

    //see 52:25
    void print(){
        cout<<"health h1: "<<this->h1<<endl;
        cout<<"level: "<<this->level<<endl;
    }

    //copy constructor:
    Hero(Hero& temp){
        cout<<"copy constructor called: "<<endl;
        this->h1=h1;
        this->level=level;
    }
    //copy constroctor bante hi jo by default created constructor hota he wo destroy ho jata he
    
};

int main()
{
    cout << "anything written before constructor calling/ obj creation?" << endl;

    // statically creating obj :
    Hero anu;

    // constructor is called by itself when an object is created, it has no return type, ex-

    // try running this programme with above line only in main func

    // dynamically creating obj-
    Hero(*b) = new Hero;
    Hero go, a, g, c, d, e, f;
    // the many times the object is created, that many times the constructor is called(invoked)

    Hero ramesh(199999); // value isliye pass ki qki hmare pass parameterise constructor he
    cout << "hi" << endl;
    Hero(*ck) = new Hero(123); // dynamic
    Hero jai;
    cout << jai.getH() << endl;
    cout << "address of ramesh: " << &ramesh << endl;

    //if me ab ooper se no argument wale constructors ko hta du then object declare kru, ex= Hero kaka; then ye errror dega qki ek baar hmne koi bhi constructor create kar diya then default constructor jo system se create hota he wo exist nhi krta (48:00)






//    Hero suresh;
//    suresh.setH(70);
//    suresh.setL('c');

   //is equal to-->
   Hero suresh(70,'C');

    suresh.print();

//copying the constructor ex-
// R.h1=suresh.h1;
// R.level=suresh.level; ko ham ese represent kar skte he-

Hero R(suresh);

    R.print();


    // important: watch at 57:00

    return 0;
}


/////////////////////////////////



//By default, constructors are defined in public section of class, We can declare a constructor private by using the private access specifier. Note that if a constructor is declared private, we are not able to create an object of the class. https://www.geeksforgeeks.org/can-constructor-private-cpp/




#include <iostream>
using namespace std;
class hero{
    int health;
    char level;
    string name;
    public:
    void seth(int health){
       this->health=health;
    }
    int geth(){
        return health;
    }
    
    void setl(char level){
        this->level=level;
        
    }
    
    char getl(){
        return level;
    }
    
    void setn(string name){
        this->name=name;
    }
    
    string getn(){
        return name;
    }
    
    
    void print(){
        cout<<"Details of "<<this->name<<": [ health is: "<<this->health<<" level is: "<<this->level<<" ]"<<endl;
    }
    
    //simple constructor:
    hero(){
        cout<<"simple constructor called "<<endl;
    }
    //parameterized constructor
    hero(int health,char level,string name){
        
        this->health=health;
        this->level=level;
        this->name=name;
        
    }
    //copy constructor:
    
    hero(hero& temp )   //qki hero type ka constructor pass kiya tha ex= suresh(ramesh) where ramesh is of type hero
    {
         cout<<"copy constructor call hua"<<endl;
        this->health=temp.health; //54:58 temp is statically alocated(ex- above line in parameter/object passing) so, dot operator
        this->level=temp.level;
        this->name=temp.name;
    }
    
    // ask urself: ye by reference q pass kiya he ooper temp object(actually suresh)

    //qki mene apna copy constructor declare kiya he so, jo default copy constructor tha uski mratyu ho jati he

    // default copy constructor shallow copy karta he
    
};

int main()
{
    hero h1;
  
    
    h1.seth(12);
    cout<<"health: "<<h1.geth()<<endl;
    
    h1.setl('A');
    cout<<"level: "<<h1.getl()<<endl;
    string s="NameBabbar";
    h1.setn(s);
    cout<<"name: "<<h1.getn()<<endl;
    
    h1.print();
//in ooper wali lines ko likhne ki jagah used simply parameterized constructor
//ex-
   hero suresh(70,'C',"Suresh");
   suresh.print();

     
    cout<<"Suresh ki chars and behaviour if copy kardi jae ritesh se(copy constructor):"<<endl;
    //copying one constructor in other:
    hero ritesh(suresh); //suresh-original, ritesh new
    //o/p:-       of Suresh: [ health is: 70 level is: C ]
    

    ritesh.setn("Ritesh");
    
    ritesh.print();

    return 0;
}

//till 1:01











