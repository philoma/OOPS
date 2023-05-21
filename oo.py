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
  
  //default constructor
hero(){
    cout<<"notice jahan jahan new object bani he wha me hu, without them calling me explicitly, by default"<<endl;
}
  char getlevel ()
  {
    return level;
  }

//parameterize constructor:


hero(int health){
  //  health=                             health;
    //oopern declared wali health      //function se passed health  for this to happen we use "this" keyword 

cout<<"this->"<<this<<endl; //"this pointer stores the address to current object"
this->health=health;
    
}
};

class villain{
    public:
    villain(){
        cout<<"aaajao ji new constructor"<<endl;
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
  
  
  //constructor:
  //constructor is called at the time of object creation
  
  //ex-
  //hero daam; // in BTS: daam.hero() is invoked to ham q na iss function ko declare hi krde
  //see line 25
  
  villain sambha;
 
 
 //since parameterized constructor so:
 
 
  
  return 0;
}
