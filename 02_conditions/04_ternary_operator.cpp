#include<iostream>

using namespace std;

int main(){

    int data1;
    int data2;
    int result;

    cout << "Enter data 1 "<<endl;
    cin >> data1;

    cout << "Enter data 2 "<<endl;
    cin >> data2;

    result = (data1>data2)?data1:data2;
    cout << result;

}
