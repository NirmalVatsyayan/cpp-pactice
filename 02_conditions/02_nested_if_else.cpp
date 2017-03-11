#include<iostream>

using namespace std;

int main(){

    int data = 10;

    if(data<=100){
        cout << "Small amount "<<endl;
    }else{
        if(data>=150){
            cout << "Awesome amount "<<endl;
        }else{
            cout << "Sufficient amount "<<endl;
        }
    }
}
