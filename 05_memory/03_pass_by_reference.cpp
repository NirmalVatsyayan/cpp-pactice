#include<iostream>

//http://stackoverflow.com/questions/8571078/pass-by-pointer-pass-by-reference

using namespace std;

//using pointers
void display(int *);

//using references
void display(int &);

int main(){
    int age = 27;
    cout << age << " "<< &age<<endl;
    display(&age);
    cout << age << endl;
    display(age);
    cout << age << endl;
}


void display(int *ptr){
    cout << *ptr<<endl;
    *ptr = 28;
}

void display(int &ptr){
    cout << &ptr << endl;
    cout << ptr<<endl;
    ptr = 29;
}

