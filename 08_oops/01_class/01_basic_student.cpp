#include<iostream>

using namespace std;

class Student{
   public:
       int roll_no;
       string name;

       void display(){
          cout << "Data ----  roll no -> " << this -> roll_no << " || name -> " << this -> name << endl;
       }

       Student(){
           cout << "Student default constructor "<<endl;
       }

       ~Student(){
           cout << "Student destructor"<<endl;
       }

       Student(int i, string j){
           cout << "Student parameterized constructor "<<endl;
           this -> roll_no = i;
           this -> name = j;
       }
};

int main(){

    Student s1 = Student(1, "Nirmal");
    Student s2 = Student(2, "Nirmal Vatsyayan");

    s1.display();
    s2.display();
}
