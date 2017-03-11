#include<iostream>

using namespace std;

int main(){

    int data1;
    int data2;
    bool n = false;

    cout << "Enter data 1 "<<endl;
    cin >> data1;

    cout << "Enter data 2 "<<endl;
    cin >> data2;

    if (data1 >= 100 && data2 >= 200){
        cout << "And OK"<<endl;
    }

    if (data1 >= 100 || data2 >= 200){
        cout << "OR OK"<<endl;
    }

    if(!n){
        cout << "Not OK"<< endl;
    }

}
