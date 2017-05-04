#include<iostream>

using namespace std;

class Account{
   public:
       int accno;
       string name;
       static int count;

       Account(int i, string j){
           this->accno = i;
           this->name = j;
           count++;
       }

       void display(){
           cout << accno << "  ||  " << name <<  endl;
       }

};

int Account::count = 0;

int main(){
    Account a = Account(1,"Nirmal");
    Account b = Account(2,"Nirmal Vatsyayan");

    cout << "Total objects are " << Account::count << endl;

}
