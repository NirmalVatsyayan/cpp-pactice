#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);

    int size = s.size();

    for (int i=0; i<size; i++){
        cout<< s.top() << "  "<<s.size()<<endl;
        s.pop();
    }

}
