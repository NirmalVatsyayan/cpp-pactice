#include<iostream>

using namespace std;

void display(const int [], int);

int main(){

    int number[] = {22,11,33,44,55};
    display(number, 5);

}

void display(const int num[], int limit){

   for(int counter=0; counter<limit; counter++){

       cout << num[counter]<<endl;
   }
}
