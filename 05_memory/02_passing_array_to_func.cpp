#include<iostream>

using namespace std;

void show(int [], int);

int main(){
    int numbers[] = {22,33,44,55,66};
    int length = 5;
    show(numbers, length);
}

void show(int numbers[], int length){
    for (int counter = 0; counter<length; counter++){
        cout << numbers[counter]<<endl;
    }

}
