#include <iostream>

using namespace std;

class Animal {
   public:
       string a = "animal";
       void eat() {
           cout<<"Eating..."<<endl;
       }
};

class Dog: public Animal{
   public:
      string b = "dog";
      void bark(){
          cout<<"Barking..." << endl;
      }
};

int main(void) {
    Dog d1;
    d1.eat();
    d1.bark();
    cout << d1.a << "  ||  " << d1.b << endl;
    return 0;
}
