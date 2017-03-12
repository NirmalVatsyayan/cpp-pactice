#include<iostream>

using namespace std;

int main(){

    int *ptr;


    ptr = new int;
    cout << ptr<< endl;

    *ptr = 27;
    cout << *ptr << endl;

    delete ptr;

}
